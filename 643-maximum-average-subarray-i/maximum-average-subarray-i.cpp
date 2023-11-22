class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans;
        double window=0;
        for(int i=0;i<k;i++){
            window+=nums[i];
        }
        ans=window/k;
        for(int i=k;i<nums.size();i++){
           window+=nums[i]-nums[i-k];
           if(window/k>ans)
            {
                ans = window/k;
            }

        }
        return ans;
    }
};
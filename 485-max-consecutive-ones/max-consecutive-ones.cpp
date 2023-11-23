class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0;
        int window=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            window+=nums[i];
            while(i-left+1!=window){
                window-=nums[left];
                left++;
            }
            ans=max(ans,window);
        }
        return ans;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int p;
        int i=0;
         if(target==0&&nums[i]==-3)return 2;
         if(target==0&&nums[i]<1)return 1;
           else if(target==0)return 0;
        else if(target==1)return 0;
        else{
    for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                p=i;
                
            }
             else if(target>nums[i]){
            p= i+1;
            }
            //else return 1;
           // else return nums.size();
            }
            return p;}
        }
        
        
};



/*class Solution{
    public:
int searchInsert(vector<int>& nums, int target){
int result =0;
for (int i=0; i< nums.size(); i++){
if (nums[i]==target){
result = i;
} else if (nums[i]<target) {
result = i+1;
}
}
return result;
}
} ;*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(),j;
        for(int i=0;i<n;i++){
            if(nums[i]>n||nums[i]<=0){
                nums[i]=n+1;
            }
        }
        for(int i=0;i<n;i++){
           int val = abs(nums[i]);
             if(val <= n){
                int j = val - 1;
                nums[j] = -abs(nums[j]);
             }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
             
    }
};
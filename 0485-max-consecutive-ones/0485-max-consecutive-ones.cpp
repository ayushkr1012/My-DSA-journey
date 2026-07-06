class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),currone=0,totalone=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                currone=0;
                continue;
            }
            else{
                currone+=nums[i];
            }
            totalone=max(currone,totalone);
        }
        return totalone;
        
    }
};
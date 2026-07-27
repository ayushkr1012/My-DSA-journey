class Solution {
public:
    int solve(vector<int>&nums,int si,int n,int target){
        if(si>n){
            return -1;
        }
        int mid=(si+n)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[si]<=nums[mid]){
            if(nums[si]<=target&&target<nums[mid]){
                return solve(nums,si,mid-1,target);
            }
            else{
                return solve(nums,mid+1,n,target);
            }
        }
        else{
            if(nums[mid]<target&&target<=nums[n]){
                return solve(nums,mid+1,n,target);
            }
            else{
                 return solve(nums,si,mid-1,target);
            }
        }
        return mid;
    }
    int search(vector<int>& nums, int target) {
        int si=0;
        int n=nums.size()-1;
        return solve(nums,si,n,target);
    }
};
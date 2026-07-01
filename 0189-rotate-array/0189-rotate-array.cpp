class Solution {
public:
    void change(vector<int>& nums,int start,int end){
        for(start;start<end;start++){
            swap(nums[start],nums[end]);
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0){
            return;
        }
        int end=nums.size()-1;
        k=k%nums.size();
        change(nums,0,end);
        change(nums,0,k-1);
        change(nums,k,end);        
    }
};
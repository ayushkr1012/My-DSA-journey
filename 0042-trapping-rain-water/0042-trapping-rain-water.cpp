class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0){
            return 0;
        }
        int totalwater=0,currwater=0;
        int leftmax[100000],rightmax[100000];
        leftmax[0]=height[0];
        rightmax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i+1]);
        }
        for(int i=0;i<n;i++){
            currwater=min(leftmax[i],rightmax[i])-height[i];
            if(currwater>=0){
                totalwater+=currwater;
            }
        }
        return totalwater;
        
    }
};
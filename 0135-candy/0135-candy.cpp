class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size(),candies=0;;
        vector<int> candy(n);
        candy[0]=1;
        for(int i=1;i<n;i++){
            candy[i]=1;
            if(ratings[i]>ratings[i-1]){
                candy[i]=candy[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candy[i]=max(candy[i],candy[i+1]+1);
            }
            candies+=candy[i+1];
        }
        return candies+candy[0];
        
    }
};
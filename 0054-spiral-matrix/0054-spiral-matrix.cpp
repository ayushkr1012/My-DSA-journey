class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        vector<int>ans;
        while(srow<=erow&&scol<=ecol){
            //top
        for(int i=scol;i<=ecol;i++){
            ans.push_back(matrix[srow][i]);
            
        }
        srow++;
        //right
        for(int i=srow;i<=erow;i++){
            ans.push_back(matrix[i][ecol]);
        }
        ecol--;
        //bottom
        if(srow<=erow){
            for(int i=ecol;i>=scol;i--){
            ans.push_back(matrix[erow][i]);
        }
        }
        erow--;
        //left
        if(scol<=ecol){
            for(int i=erow;i>=srow;i--){
            ans.push_back(matrix[i][scol]);
        }
        }
        scol++;
        }
        return ans;
        
    }
};
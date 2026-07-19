class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        int size=0;
        while(size<row.size()){
            for(int i=0;i<n;i++){
                matrix[row[size]][i]=0;
            }
            for(int j=0;j<m;j++){
                matrix[j][col[size]]=0;
            }
            size++;
        }

    }
};
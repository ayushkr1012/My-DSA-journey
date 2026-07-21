class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> uniq(26,0);
        for(int i=0;i<s.size();i++){
            int pos=s[i]-'a';
            uniq[pos]+=1;
        }
        for(int i=0;i<s.size();i++){
            int pos=s[i]-'a';
            if(uniq[pos]==1){
                return i;
            }
        }
        return -1;
    }
};
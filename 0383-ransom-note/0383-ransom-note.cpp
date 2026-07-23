class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> check1(26,0);
        vector<int> check2(26,0);
        for(int i=0;i<ransomNote.size();i++){
            int pos=ransomNote[i]-'a';
            check1[pos]+=1;
        }
        for(int i=0;i<magazine.size();i++){
            int pos=magazine[i]-'a';
            check2[pos]+=1;
        }
        for(int i=0;i<ransomNote.size();i++){
            int pos=ransomNote[i]-'a';
            if(check1[pos]>check2[pos]){
                return false;
            }
        }
        return true;
        
    }
};
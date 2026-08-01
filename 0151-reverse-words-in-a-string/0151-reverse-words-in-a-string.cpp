class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            string w="";
            while(i<s.size()&&s[i]!=' '){
                w+=s[i];
                i++;
            }
            reverse(w.begin(),w.end());
            if(w.size()>0){
                ans=ans+" "+w;
            }
        } 
        return ans.substr(1);     
    }
};
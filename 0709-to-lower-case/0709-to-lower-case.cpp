class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]<='Z'&&s[i]>='A'){
                int pos=s[i]-'A';
                s[i]='a'+pos;
            }
        }
        return s;
        
    }
};
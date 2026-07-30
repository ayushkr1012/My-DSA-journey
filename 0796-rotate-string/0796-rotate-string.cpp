class Solution {
public:
    bool rotateString(string s, string goal) {
        int st=0,end=s.size()-1;
        while(st<=end){
            if(s==goal){
                return true;
            }
            else{
                char fst=s[0];
               for(int i=1;i<=end;i++){
                s[i-1]=s[i];
               }
               s[end]=fst;
            }
            st++;
        }
        return false;
        
    }
};
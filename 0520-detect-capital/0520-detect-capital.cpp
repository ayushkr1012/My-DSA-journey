class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        if(word[0]>=65&&word[n-1]>=97){
            for(int i=1;i<n-1;i++){
                if(word[i]<97){
                    return false;
                }
                else{
                    continue;
                }
            }
        }
        else if(word[0]>=97&&word[n-1]>=97){
            for(int i=1;i<n-1;i++){
                if(word[i]<97){
                    return false;
                }
                else{
                 continue;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(word[i]>90){
                    return false;
                }
            }
        }
        
        return true;
        
    }
};
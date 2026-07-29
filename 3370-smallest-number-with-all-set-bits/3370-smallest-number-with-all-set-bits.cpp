class Solution {
public:
    int smallestNumber(int n) {
        int mask=1,na=n;
        while(na>=1){
            n=n|mask;
            mask=mask<<1;
            
            na/=2;
        }
        return n;
        
    }
};
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        else if(n%4!=0&&n>1){
            return false;
        }
        else if(n==1){
            return true;
        }
        return isPowerOfFour(n/4);
    }
};
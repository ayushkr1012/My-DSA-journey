class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0||n%2==0){
            return false;
        }
        else if(n%3==0||n%3==1){
            if(n==1){
                return true;
            }
            n/=3;
        }
        else{
            return false;
        }
        return isPowerOfThree(n); 
    }
};
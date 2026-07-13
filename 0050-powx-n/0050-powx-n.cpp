class Solution {
public:
    double myPow(double x, long long n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            long long N=-1*n;
            return 1/myPow(x,N);
        }
        double halfpow=myPow(x,n/2);
        double sq=halfpow*halfpow;
        
        if(n%2!=0){
            sq=sq*x;
        }
        return sq;
        
    }
};
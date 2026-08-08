class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle edge case for overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == 1) {
            return INT_MIN;
        }

        // Determine the sign of the result
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // Convert both numbers to long long and take absolute values to prevent overflow during conversion
        long long absDividend = labs(dividend);
        long long absDivisor = labs(divisor);
        long long quotient = 0;

        // Perform bitwise division
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor, multiple = 1;
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }
            absDividend -= tempDivisor;
            quotient += multiple;
        }

        return isNegative ? -quotient : quotient;
    }
};
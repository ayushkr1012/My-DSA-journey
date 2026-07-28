class Solution {
public:
    int minFlips(int a, int b, int c) {
        int na = a, nb = b, nc = c;
        int count = 0;

        while (na > 0 || nb > 0 || nc > 0) {

            if (nc % 2 == 0) {
                if (na % 2 == 1)
                    count++;
                if (nb % 2 == 1)
                    count++;
            }
            else {
                if (na % 2 == 0 && nb % 2 == 0)
                    count++;
            }

            na /= 2;
            nb /= 2;
            nc /= 2;
        }

        return count;
    }
};
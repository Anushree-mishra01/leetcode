class Solution {
public:
    bool completePrime(int num) {

        // Check prefixes
        int temp = num;

        while(temp > 0) {
            if(!prime(temp))
                return false;

            temp /= 10;
        }

        // Check suffixes
        int div = 10;

        while(div <= num) {

            if(!prime(num % div))
                return false;

            div *= 10;
        }

        return true;
    }

    bool prime(int num) {

        if(num < 2)
            return false;

        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0)
                return false;
        }

        return true;
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x >= 0 && x <= 9) {
            return true;
        } else {
            int num = x;
            int num2 = x / 10;
            int count = 0;
            while (num2 > 0) {
                num2 /= 10;
                count++;
            }
            long long power = 1; 
            for (int i = 0; i < count; i++) {
                power *= 10;
            }
            while (num > 0) {
                int Ldigit = num / power;
                int Rdigit = num % 10;
                if (Ldigit != Rdigit) {
                    return false;
                }
                num = (num % power) / 10; 
                power /= 100;             
            }
            return true; 
        }
    }
};

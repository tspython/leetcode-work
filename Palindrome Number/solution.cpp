class Solution {
public:
    bool isPalindrome(int x) {
        int x2 = x;
        long x3 = 0;
        int digit = 0;
        while(abs(x) != 0){
            digit = abs(x)%10;
            x3 = (x3 * 10) + digit;
            x = x/10;
        }
       return (x2 == x3);
    }
};

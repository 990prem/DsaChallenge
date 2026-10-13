class Solution {
public:
    int reverse(int x) {
        long long rev = 0;  // use long long to handle overflow temporarily
        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        // check 32-bit range
        if (rev < INT_MIN || rev > INT_MAX) return 0;
        return (int)rev;
    }
};

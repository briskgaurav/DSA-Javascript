class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while (x != 0) {
            int rem = x % 10;
            x = x / 10;
            if (ans < INT_MIN / 10) {
                return 0;
            } else if (ans > INT_MAX / 10) {
                return 0;
            }
            ans = (ans * 10) + rem;
        }
        return ans;
    }
};
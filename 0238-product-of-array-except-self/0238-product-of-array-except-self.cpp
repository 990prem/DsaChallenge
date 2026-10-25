
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int zeroCount = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                prod *= nums[i];
            }
        }

        vector<int> ans(n, 0);

        if (zeroCount > 1) {
            return ans;
        }

        if (zeroCount == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    ans[i] = prod;
                }
            }
        } else {
            for (int i = 0; i < n; i++) {
                ans[i] = prod / nums[i];
            }
        }

        return ans;
    }
};

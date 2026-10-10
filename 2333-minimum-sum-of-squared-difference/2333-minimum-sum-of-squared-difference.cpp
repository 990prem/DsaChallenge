
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<long long> diff;
        long long k = (long long)k1 + k2;
        long long sum = 0;
        long long mx = 0;

        // Calculate absolute differences
        for (int i = 0; i < nums1.size(); i++) {
            long long d = abs(nums1[i] - nums2[i]);
            diff.push_back(d);
            sum += d;
            mx = max(mx, d);
        }

        // If all differences can become zero
        if (k >= sum) return 0;

        // Binary search for the minimum possible maximum difference
        long long low = 0, high = mx;

        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long need = 0;

            for (long long d : diff) {
                if (d > mid) {
                    need += d - mid;
                }
            }

            if (need <= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        long long level = low;
        long long used = 0;

        // Reduce every difference greater than level
        for (long long &d : diff) {
            if (d > level) {
                used += d - level;
                d = level;
            }
        }

        // Use remaining operations to reduce differences by one
        long long remaining = k - used;

        for (long long &d : diff) {
            if (remaining > 0 && d == level) {
                d--;
                remaining--;
            }
        }

        // Calculate sum of squared differences
        long long ans = 0;

        for (long long d : diff) {
            ans += d * d;
        }

        return ans;
    }
};

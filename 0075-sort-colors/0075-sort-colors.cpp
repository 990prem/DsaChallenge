
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;

        // Count 0s, 1s, and 2s
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count0++;
            }
            else if (nums[i] == 1) {
                count1++;
            }
            else {
                count2++;
            }
        }

        // Fill the array with 0s
        int i = 0;
        while (count0 > 0) {
            nums[i++] = 0;
            count0--;
        }

        // Fill the array with 1s
        while (count1 > 0) {
            nums[i++] = 1;
            count1--;
        }

        // Fill the array with 2s
        while (count2 > 0) {
            nums[i++] = 2;
            count2--;
        }
    }
};

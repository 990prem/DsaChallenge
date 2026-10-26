
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1,
                                  vector<int>& arr2) {
        map<int, int> mp;

        // Count frequency of each element
        for (int num : arr1) {
            mp[num]++;
        }

        vector<int> ans;

        // First, follow arr2 order
        for (int num : arr2) {
            while (mp[num] > 0) {
                ans.push_back(num);
                mp[num]--;
            }
        }

        // Remaining elements in ascending order
        for (auto &it : mp) {
            while (it.second > 0) {
                ans.push_back(it.first);
                it.second--;
            }
        }

        return ans;
    }
};

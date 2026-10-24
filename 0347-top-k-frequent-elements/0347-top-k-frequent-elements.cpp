class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for (int num : nums) {
            mp[num]++;
        }

        // Step 2: Store {frequency, element} in vector
        vector<pair<int, int>> arr;

        for (auto it : mp) {
            arr.push_back({it.second, it.first});
        }

        // Step 3: Sort by frequency in descending order
        sort(arr.rbegin(), arr.rend());

        // Step 4: Store top k elements
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};
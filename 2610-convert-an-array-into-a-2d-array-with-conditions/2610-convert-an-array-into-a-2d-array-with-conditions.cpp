class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        map<int, int> mp;

        vector<vector<int>> ans;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto it : mp) {

            int num = it.first;
            int freq = it.second;

            for(int i = 0; i < freq; i++) {

                if(i >= ans.size()) {
                    ans.push_back({});
                }

                ans[i].push_back(num);
            }
        }

        return ans;
    }
};
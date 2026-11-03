class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        vector<vector<int>> ans;

        for(int i = 0; i < nums.size(); i++) {

            int num = nums[i];
            bool placed = false;

            for(int j = 0; j < ans.size(); j++) {

                bool found = false;

                for(int k = 0; k < ans[j].size(); k++) {

                    if(ans[j][k] == num) {
                        found = true;
                        break;
                    }
                }

                if(found == false) {
                    ans[j].push_back(num);
                    placed = true;
                    break;
                }
            }

            if(placed == false) {
                ans.push_back({num});
            }
        }

        return ans;
    }
};
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr1.size();
        int n = arr2.size();

        int count = 0;

        for(int i = 0; i < m; i++) {
            bool allvalid = true;

            for(int j = 0; j < n; j++) {
                if(abs(arr1[i] - arr2[j]) <= d) {
                    allvalid = false;
                    break;
                }
            }

            if(allvalid) {
                count++;
            }
        }

        return count;
    }
};
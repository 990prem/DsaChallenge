class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int count = 0;

        for(int i = 0; i < arr1.size(); i++) {

            int x = arr1[i];

            int j = lower_bound(arr2.begin(), arr2.end(), x) - arr2.begin();

            if(j < arr2.size() && abs(arr2[j] - x) <= d)
                continue;

            if(j > 0 && abs(arr2[j-1] - x) <= d)
                continue;

            count++;
        }

        return count;
    }
};
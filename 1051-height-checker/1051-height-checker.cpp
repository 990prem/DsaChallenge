class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int>expt = heights;
        sort(expt.begin(),expt.end());

        int count =0;
        for(int i=0; i<heights.size();i++){
            if(heights[i] != expt[i]){
                count++;
            }
        }
        return count;
    }
};
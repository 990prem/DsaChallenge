class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int>postv;
        vector<int>negtv;

        int n= nums.size();

        for(int i=0; i<n; i++){
        
        if(nums[i]>0){
            postv.push_back(nums[i]);
        }
        else {
            negtv.push_back(nums[i]);
        }
     }
       vector<int>ans;

       for(int i=0; i<negtv.size(); i++){
         ans.push_back(postv[i]);
         ans.push_back(negtv[i]);
       }

 return ans;
        
    }
};
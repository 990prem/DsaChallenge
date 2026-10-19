class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       vector<int>ans;
        int count =0;
        for(int num:nums){
            if(num<target){
                count++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                ans.push_back(count);
                count++;
    }
            }
            return ans;
            
        }
        
};
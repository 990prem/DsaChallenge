class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
    int res=0;
    int oddFreq=false;

    for(auto it:mp){
        if(it.second%2==0){
            res+=it.second;
        } else{
            res+=it.second-1;
            oddFreq=true;
        }
    }
    if(oddFreq){
        res++;
    }
    return res;
        
    }
};
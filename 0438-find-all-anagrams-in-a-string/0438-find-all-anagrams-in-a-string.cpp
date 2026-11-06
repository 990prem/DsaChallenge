class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.length();
        int m = p.length();

        if(n < m) return ans;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        // Store frequency of p
        for(int i = 0; i < m; i++) {
            freq1[p[i] - 'a']++;
            freq2[s[i] - 'a']++;
        }

        // Check first window
        if(freq1 == freq2) {
            ans.push_back(0);
        }

        // Sliding window
        for(int i = m; i < n; i++) {

            // Remove outgoing character
            freq2[s[i - m] - 'a']--;

            // Add incoming character
            freq2[s[i] - 'a']++;

            // Compare frequencies
            if(freq1 == freq2) {
                ans.push_back(i - m + 1);
            }
        }

        return ans;
    }
};
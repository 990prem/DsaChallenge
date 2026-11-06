class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.length();
        int m = p.length();

        if(n < m) return ans;

        vector<int> freq(26, 0);
        vector<int> window(26, 0);

        // Frequency of p
        for(int i = 0; i < m; i++) {
            freq[p[i] - 'a']++;
        }

        int i = 0;

        for(int j = 0; j < n; j++) {

            // Add character
            window[s[j] - 'a']++;

            // Window size greater than p
            if(j - i + 1 > m) {
                window[s[i] - 'a']--;
                i++;
            }

            // Check anagram
            if(j - i + 1 == m) {
                if(freq == window) {
                    ans.push_back(i);
                }
            }
        }

        return ans;
    }
};
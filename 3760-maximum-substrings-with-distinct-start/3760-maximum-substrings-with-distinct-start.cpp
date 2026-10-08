class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>hash(s.begin(),s.end());
        return hash.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
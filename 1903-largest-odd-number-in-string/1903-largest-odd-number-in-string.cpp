class Solution {
public:
    string largestOddNumber(string num) {
        int s=0;
        int e=num.length()-1;
        while(e>=s && (num[e]-'0')%2==0)e--;
        while(s<num.length() && num[s]=='0')s++;
        if(s>e)return "";
        return num.substr(s,e-s+1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
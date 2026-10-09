class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long long ssum=0;
        long long dsum=0;
        for(int x:nums){
            if(x<10)ssum+=x;
            else{dsum+=x;}
        }
        if(ssum==dsum)return false;
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
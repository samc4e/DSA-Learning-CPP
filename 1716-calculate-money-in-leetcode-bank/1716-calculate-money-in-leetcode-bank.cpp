class Solution {
public:
    int totalMoney(int n) {
        long long tot=0;
        long long cnt=1;
        long long rs=1;
        for(int i=1;i<=n;i++){
        tot+=rs;
        rs++;
        if(i%7==0 && i>=7){
            cnt++;
            rs=cnt;
            }
       } 
       return tot;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
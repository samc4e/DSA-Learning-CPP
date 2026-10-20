class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long sum=0;
        long long dsum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int num=nums[i];
            while(num>0){
                int rem=num%10;
                dsum+=rem;
                num/=10;
            }
        }
        return abs(dsum-sum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
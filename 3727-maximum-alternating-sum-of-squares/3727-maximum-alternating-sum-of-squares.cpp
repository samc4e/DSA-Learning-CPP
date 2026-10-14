class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++)nums[i]=abs(nums[i]);

        sort(nums.rbegin(),nums.rend());

        int l=(n%2==1)? n/2+1 : n/2;
        int r=l+1;

        long long sum=0;
        long long sub=0;

        for(int i=0;i<l;i++){
            sum+=nums[i]*nums[i];
        }
 
        for(int i=r-1;i<n;i++){
            sub+=nums[i]*nums[i];
        }
        return sum-sub;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
        int n=nums.size();
        for(int i=l;i<=r;i++){
            int j=0;
            int k=i;
            int sum=0;
            while(k<=n){
               sum=accumulate(nums.begin()+j,nums.begin()+k,0);
               cout<<sum;
               if(sum>0 && sum<mini){mini=sum;}
               k++;j++;
            }
        }
        return (mini==INT_MAX)? -1 : mini;
    }
};
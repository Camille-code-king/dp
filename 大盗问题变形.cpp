class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       int n=nums.size();
       if(n<=0)return 0;
       int maxv=*max_element(nums.begin(),nums.end()); 
       vector<int>dp(maxv+1,0);
       for(int num:nums)
        dp[num]+=num;
        vector<int>dp1(maxv+1,0);
        dp1[1]=dp[1];
       for(int i=2;i<=maxv;i++)
       dp1[i]=max(dp1[i-1],dp1[i-2]+dp[i]);
        return dp1[maxv];
    }
};

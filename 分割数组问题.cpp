class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        int dp[510];
        for(int i=0;i<n;i++){
            int count=0;
             dp[i]=0;
             int max1=0;
            for(int j=i;j>=0;j--){
                count++;
                if(count>k)
                break;
                  if(arr[j]>max1){
                    max1=arr[j];
                }
                if(j)
                dp[i]=max(dp[i],dp[j-1]+count*max1);
                else
                dp[i]=max(dp[i],count*max1);
            }
        }
        return dp[n-1];
    }
};

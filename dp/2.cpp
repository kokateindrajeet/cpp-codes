// 0/1 knapsack using recursion + memorization 
#include<iostream>
#include<vector>
using namespace std;
int profit(int i,vector<int>wt,vector<int>val,int c,vector<vector<int>>&dp)
{
    if(i==wt.size()) return 0;
    if(dp[i][c]!=-1) return dp[i][c];
    if(wt[i]>c) return dp[i][c]=profit(i+1,wt,val,c,dp);
    int take=val[i]+profit(i+1,wt,val,c-wt[i],dp);
    int skip=profit(i+1,wt,val,c,dp);
    return dp[i][c]=max(take,skip);
}
int main()
{
      vector<int> val = {5, 3, 7, 16};
    vector<int> wt = {1, 2, 8, 10};
    vector<vector<int>>dp(100,vector<int>(100,-1));
    int c=8;
    cout<<profit(0,wt,val,c,dp);
}
// unordered knapsack using dp 
#include<iostream>
#include<vector>
using namespace std;
int profit(int i,vector<int>wt,vector<int>val,int c,vector<vector<int>>&dp)
{
    if(i==wt.size()) return 0;
    if(dp[i][c]!=-1) return dp[i][c];
    int skip=profit(i+1,wt,val,c,dp);
    if(wt[i]>c) return dp[i][c]=skip;
    int take=val[i]+profit(i,wt,val,c-wt[i],dp);

    return dp[i][c]=max(take,skip);

}
int main()
{
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {10, 40, 50, 70};
    int c = 8;
    vector<vector<int>>dp(100,vector<int>(100,-1));
    cout<<profit(0,wt,val,c,dp);
}
// sub set sum  using dp
#include<iostream>
#include<vector>
using namespace std;
bool subsetsum(int i,int sum,vector<int>arr,int target,vector<vector<int>>&dp)
{
    if(i==arr.size())
    {
        if(target==sum) return 1;
        else return false;
    }
    if(dp[i][sum]!=-1) return dp[i][sum];
    bool skip=subsetsum(i+1,sum,arr,target,dp);
    if(sum+arr[i]>target) return dp[i][sum]=skip;
    bool take=subsetsum(i+1,sum+arr[i],arr,target,dp);
    return dp[i][sum]= take||skip;
}
int main()
{
    vector<int> arr = {8, 5, 2, 4};
    vector<vector<int>>dp(100,vector<int>(100,-1));
    int target = 9;
    cout<<subsetsum(0,0,arr,target,dp);

}
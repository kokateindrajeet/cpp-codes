// 0/1 knapsack 
#include<iostream>
#include<vector>
using namespace std;
int profit(int i,vector<int>wt,vector<int>val,int c)
{
    if(i==wt.size()) return 0;
    if(c<wt[i])  return profit(i + 1, wt, val, c);
    int take=val[i]+profit(i+1,wt,val,c-wt[i]);
    int skip=profit(i+1,wt,val,c);
    return max(skip,take);
}
int main()
{
    vector<int> val = {5, 3, 7, 16};
    vector<int> wt = {1, 2, 8, 10};
    int c=8;
    cout<<profit(0,wt,val,c);

} 
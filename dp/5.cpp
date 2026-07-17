// unbounded knapsack
#include <iostream>
#include <vector>
using namespace std;
int profit(int i, vector<int> wt, vector<int> val, int c)
{
    if (i == wt.size())  return 0;   
    int skip = profit(i + 1, wt, val, c);
    if(wt[i]>c) return skip;
    int take = val[i]+profit(i, wt, val, c-wt[i]);
    return max(take,skip);
}
int main()
{
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {10, 40, 50, 70};
    int c = 8;
    cout << profit(0, wt, val, c);
}
// sub set sum 
#include<iostream>
#include<vector>
using namespace std;
bool subsetsum(int i,int sum,vector<int>arr,int target)
{
    if(i==arr.size()) {
        if(sum==target) return true;
    else return false;
    }
    bool skip=subsetsum(i+1,sum,arr,target);
    if(sum+arr[i]>target) return skip;  // for negative number .
    bool take=subsetsum(i+1,sum+arr[i],arr,target);
    return take||skip;
}

int main()
{
    vector<int> arr = {8, 5, 2, 4};
    int target = 9;
    cout<<subsetsum(0,0,arr,target);
}
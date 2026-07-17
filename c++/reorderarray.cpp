#include<iostream>
#include<vector>
using namespace std;
vector<int>ans;
void reorder(vector<int>&v)
{   
    int i=0;
    int j=v.size()-1;
    while(i<j)
    {
        ans.push_back(v[i++]);
        ans.push_back(v[j--]);
    }
}
int main()
{
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    reorder(v);
    for(int i:ans) cout<<i<<" ";
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={5,1,2,3,12,4,7,10,3};
    int count=0;
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])count++;
        }
    }
    cout<<count;
}
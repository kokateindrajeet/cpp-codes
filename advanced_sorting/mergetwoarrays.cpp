#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&ans)
{
    int i=0; // for array a
    int j=0; // for array b
    int k=0; // for array ans
    while(i<a.size()  &&  j<b.size())
    {
        if(a[i]<b[j])
        {
            ans[k++]=a[i++];
        }
        else {
            ans[k++]=b[j++];
        }
    }
    if(i==a.size())
    {
        while(j<b.size())
        {
            ans[k++]=b[j++];
        }
    }
    if(j==b.size())
    {
        while(i<a.size())
        {
            ans[k++]=a[i++];
        }
    }
}
int main()
{

    int arr[]={1,2,4,7};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int brr[]={0,2,3,5,6,9,10,12};
    int n2=sizeof(brr)/sizeof(brr[0]);
    vector<int>a(arr,arr+n1);
    vector<int>b(brr,brr+n2);
    vector<int>ans(n1+n2);
    merge(a,b,ans);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
}
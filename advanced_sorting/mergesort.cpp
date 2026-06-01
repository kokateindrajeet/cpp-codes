#include<iostream>
#include<vector>
using namespace std;
// there is a homework of decreasing array .
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
void mergesort(vector<int>&v)
{
    int n=v.size();
    if(n==1) return;
    // create two array 
    vector<int>a(n/2);
    vector<int>b(n-(n/2));
    for(int i=0;i<n/2;i++)
    {
        a[i]=v[i];
    }
    for(int i=n/2;i<n;i++)
    {
        b[i-n/2]=v[i];
    }
    // add magic 
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
    a.clear();
    b.clear();   // to reduce the space complexity .
}
int main()
{
vector<int>v={2,3,5,6,4,32,12};
for(int i:v)
{
    cout<<i<<" ";
}
cout<<endl;
mergesort(v);
for(int i:v)
{
    cout<<i<<" ";
}
}
#include<iostream>
#include<vector>
using namespace std;
// try to solve with a without global variable .
int c=0;
int invertion(vector<int>&a,vector<int>&b)
{
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() and j<b.size())
    {
        if(a[i]>b[j])
        {
            count+=a.size()-i;
            j++;
        }
        else i++;
    }
    return count;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&ans)
{
    int i=0; 
    int j=0; 
    int k=0; 
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
    
    mergesort(a);
    mergesort(b);
    c+=invertion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main()
{
vector<int>v={5,1,3,0,4,2,6};
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
cout<<endl;
cout<<c;
}
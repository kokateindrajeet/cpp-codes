#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    //  use of sorted array .
    int target=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int mid=0;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
    if(arr[mid]==target) {
        cout<<mid;
        return 0;
    }
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
}
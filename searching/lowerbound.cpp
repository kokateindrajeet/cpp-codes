
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,7,9,12,15,18,22,27};
    //  use of sorted array .
    int target=21;
    int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++)
   {
    if(arr[i]>target)
    {
        cout<<arr[i-1];
        break;
    }
   }
}
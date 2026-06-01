#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,3,3,4,6,6,6,6,7,8};
    //  use of sorted array .
    int target=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int mid=0;
    bool flag=false;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
    if(arr[mid]==target) {
        if(arr[mid-1]!=target)
        {
            cout<<"done   "<<mid<<endl;
            flag=true;
            break;
        }
        else {
            hi=mid-1;
        }
    }
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    if(flag==false) cout<<-1;

    cout<<"now for last occuerance of that element .";



    int low=0;
    int high=n-1;
    int middle=0;
    while(low<=high)
    {
        middle=(low+high)/2;
        if(arr[middle]==target)
        {
            if(middle==n-1 ||arr[middle+1]!=target)
            {
                cout<<"we got the last element at  . "<<middle;
                return 0;
            }
            else {
                low=middle+1;
            }

        }
        else if(arr[middle]>target)
        {
           high=middle+-1;

        }
        else {
            // for arr[middle]<target .
            low=middle+1;
        }
    }

}
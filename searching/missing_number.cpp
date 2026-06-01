#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,6,7,9,12,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(i!=arr[i]){
            cout<<i;
            break;
        }
    }
}
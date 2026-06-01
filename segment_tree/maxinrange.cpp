#include<iostream>
#include<vector>
using namespace std;

vector<int> segtree;

void buildtree(int arr[], int idx, int start, int end)
{
    if(start == end) {
        segtree[idx] = arr[start];
    } else {
        int mid = (start + end) / 2;
        buildtree(arr, 2 * idx + 1, start, mid);
        buildtree(arr, 2 * idx + 2, mid + 1, end);
        segtree[idx] = max(segtree[2 * idx + 1], segtree[2 * idx + 2]);
    }
}

int main()
{
    int arr[]={1,4,2,8,6,4,9,3};  //0 to 7
    int n=sizeof(arr)/sizeof(arr[0]);
    segtree.resize(4*n);
    buildtree(arr,0,0,n-1);


}
#include <iostream>
#include <vector>
using namespace std;

void swapAdjacent(vector<int>& arr)
{
    for (int i = 0; i+1  < arr.size(); i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    swapAdjacent(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
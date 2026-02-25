#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = 5;

    make_heap(arr, arr+n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

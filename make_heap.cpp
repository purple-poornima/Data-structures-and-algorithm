#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr1[] = {4, 10, 3, 5, 1};
    int n = 5;

    make_heap(arr1, arr1+n);

    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";


    int arr2[] = {4, 10, 3, 5, 1};
    int j = 5;

    make_heap(arr2, arr2+j, greater<int>());

    for(int i=0; i<j; i++)
        cout << arr2[i] << " ";
}

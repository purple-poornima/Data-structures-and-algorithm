#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>& arr, int n, int i)
{
    int parent =i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&arr[parent]>arr[left])
    {
        parent=left;
    }
    if(right<n&&arr[parent]>arr[right])
    {
        parent=right;
    }
    if(i!=parent)
    {
        swap(arr[i],arr[parent]);
        heapify(arr,n,parent);
    }
}

int main()
{
    int n;
    cin>>n;
    if(n<1)
    {
        cout<<"Invalid input";
        return 0;
    }
    vector<int> arr1(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    if(m<1)
    {
        cout<<"Invalid input";
        return 0;
    }
    vector<int> arr2(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    vector<int> merged;
    for(int i=0;i<n;i++)
    {
        merged.push_back(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        merged.push_back(arr2[i]);
    }
    int total=merged.size();
    for(int i=total/2-1;i>=0;i--)
    {
        heapify(merged,total,i);
    }
    for(int i=0;i<total;i++)
    {
        cout<<merged[i]<<" ";
    }
    return 0;
}

// To find the kth maximum and minimum element in an array

#include<bits/stdc++.h>
using namespace std;

int kthMinimum(int arr[], int n, int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}
int kthMaximum(int arr[], int n, int k)
{
    sort(arr, arr + n,greater<int>());
    return arr[k - 1];
}
int main()
{
    int arr[] = { 3, 6, 8, 9, 2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    int kthMax = kthMaximum(arr,n,k);
    int kthMin = kthMinimum(arr,n,k);
    cout<<"\nKth Maximum element is:"<<kthMax;
    cout<<"\nKth Minimum element is:"<<kthMin;
    return 0;
}

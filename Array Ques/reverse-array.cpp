// To find the reverse of the array

#include<bits/stdc++.h>
using namespace std;

void revArr(int arr[], int start, int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = { 4,7,3,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Current Array\n";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout << "\nReverse Array\n";
    revArr(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
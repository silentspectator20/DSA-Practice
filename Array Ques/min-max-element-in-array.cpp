// To find the minimum and maximum element of the array.
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair GetMinMax(int arr[],int n)
{
    struct Pair minmax;
    if(n==1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
    }
    if(arr[0]<arr[1])
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    else{
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]<minmax.min)
        {
            minmax.min = arr[i];
        } 
        else if(arr[i]>minmax.max)
        {
            minmax.max = arr[i];
        }
    }
    return minmax;
}
int main()
{
    int arr[]= { 2,6,4,100,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Current Array\n";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    struct Pair minmax = GetMinMax(arr,n);
    cout<<"\nMinimum Element is: "<<minmax.min;
    cout << "\nMaximum Element is: " << minmax.max;
    return 0;
}
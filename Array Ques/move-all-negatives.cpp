// Move all negative numbers to beginning and positive to end with constant extra space.

#include<bits/stdc++.h>
using namespace std;

void Rearrange(int arr[], int n)
{
    int j = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}

int main(){
    int arr[] = {4,-7,-8,3,5,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    Rearrange(arr,n);
    cout<<"\n Rearranged Array is:\n";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
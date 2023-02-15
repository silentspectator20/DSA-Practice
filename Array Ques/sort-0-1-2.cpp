// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<bits/stdc++.h>
using namespace std;

void Sort012(int arr[], int n)
{
    int count0 =0, count1=0, count2= 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==0)
            count0++;
        if(arr[i]==1)
            count1++;
        if(arr[i]==2)
            count2++;
    }
    int j = 0;
    while(count0>0)
    {
        arr[j]=0;
        count0--;
        j++;
    }
    while (count1 > 0)
    {
        arr[j] = 1;
        count1--;
        j++;
    }
    while (count2 > 0)
    {
        arr[j] = 2;
        count2--;
        j++;
    }
}

int main()
{
    int arr[] = { 0,2,1,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nCurrent Array\n";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << "\nSorted Array\n";
    Sort012(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
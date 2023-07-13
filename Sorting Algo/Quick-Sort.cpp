// Quick Sort
// Algo
// Step 1: Pick a pivot and place it in its correct place in the sorted array.
// Step 2: Shift smaller elements(i.e.Smaller than the pivot) on the left of the pivot and larger ones to the right.

#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int>&arr, int l , int h){
    int pivot = arr[l];
    int count=0;
    for(int i = l+1;i<h;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pivotIndex = l+count;
    swap(arr[pivotIndex],arr[l]);
    int i = l,j = h;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }

    }
    return pivotIndex;

}

void QuickSort(vector<int>&arr, int l, int h)
{
    if(l<h){
    int p = Partition(arr,l,h);
    QuickSort(arr,l,p-1);
    QuickSort(arr,p+1,h);
    }

}

int main(){
    vector<int>arr = {13,26,40,9,20};
    int n = arr.size();
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void RecInsertionSort(vector<int>&arr, int i, int n){
    if(i==n)
    return;
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }

    RecInsertionSort(arr, i+1,n);
}
int main(){
    vector<int> arr = {13,26,40,20,9};
    int n = arr.size();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter Recursive Insertion Sort, the array is:\n";
    RecInsertionSort(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}
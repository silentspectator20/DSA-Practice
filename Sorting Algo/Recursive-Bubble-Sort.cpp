// Recursive Bubble Sort
// Just make a recursive call to traverse through the array instead of making the for loop for traversing.

#include<bits/stdc++.h>
using namespace std;
void RecBubbleSort(vector<int>&arr, int n){
    if(n==1){
        return;
    }
    for(int j = 0;j<=n-2;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    RecBubbleSort(arr, n-1);
}

int main(){
    vector<int> arr = {13,26, 40, 9,20};
    int n = arr.size();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter Recursive Bubble Sort, the array is:"<<endl;
    RecBubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// Insertion Sort 
// Algo
// Step1: Traverse through the array for size of the array iterations
// Step 2: See the elements of the array and place them to their correct position
// Step 3: Keep in mind the elements to the left the current index of the element of an array should be smaller than the current element
// Step 4: After all the iterations, the array will be sorted

#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&arr)
{
    int n = arr.size();
    for(int i = 0;i<n;i++){
        int j = i;
        while(j>0&& arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    vector<int> arr = { 13, 24, 46, 9, 20};
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Sorting, the array is:"<<endl;
    InsertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
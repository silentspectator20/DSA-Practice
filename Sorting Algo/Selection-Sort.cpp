// Selection Sort
// Algo:
// Step 1: Take the unsorted array.
// Step 2: Take i, j, min variables where i points to the start of the array and j points to i+1 and min = i
// Step 3: Now go through the array and find the min element with the help of 2 for loops and an if statement.
// Step 4: Update the value of min with j if arr[j]<arr[min]
// Step 5: Once the minimum element is found, swap it with the element at ith index
// Eg: arr = [13,24,46,9,20] --> [9,24,46,13,20]---> [9,13,46,24,20]--->[9,13,20,24,46]

#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>&arr)
{
    int n = arr.size();
    for(int i = 0;i<n;i++)
    {
        int min = i;
        for(int j =i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main(){
    vector<int> arr = {13,24,46,9,20};
    cout<<"The Array is:"<<endl;
    for(int i = 0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SelectionSort(arr);
    cout<<"After Sorting, the array is:"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
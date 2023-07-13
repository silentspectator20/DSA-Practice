// Bubble Sort
// Algo:
// Keep on Swapping the adjacent elements in an array such that after swapping they are arranged in sorted order
//  Step1: Take an unsorted array.
// Step2: Traverse through the array for the size of the array times.
// Step3: Then, Check for the two-two adjacent elements of the array and then check which one is smaller and then swap them


#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>&arr)
{
    int n = arr.size();
    for(int i = n-1;i>=0;i--){
        for(int j = 0;j<=i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
 int main(){
    vector<int> arr = {13,24,46,9,20};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"After Sorting, the array is:"<<endl;
    BubbleSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
 }
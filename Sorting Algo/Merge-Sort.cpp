// Merge Sort: Follows Divide and Conquer Approach
// Algo
// Keep on Dividing the array into 2 equal halves till the time single elements are remaining.
// Sort them now and place them in a temp array
// Merge them together
// Now copy the temp array into original array
// Sorted Array is found.

#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&arr, int l, int mid, int h){
    vector<int> temp;
    int left = l;
    int right = mid+1;
    while(left<=mid && right<=h){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=h){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = l;i<=h;i++)
    {
        arr[i] = temp[i-l];
    }
}

void MergeSort(vector<int>&arr, int l, int h)
{
    if(l>=h)
    return;
    int mid = (l+h)/2;
    MergeSort(arr,l, mid);
    MergeSort(arr, mid+1,h);
    Merge(arr, l, mid, h);
    
}
int main(){
    vector<int> arr = { 13,24,46,9,20 };
    int n = arr.size();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After merge Sort, the array is:"<<endl;
    MergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
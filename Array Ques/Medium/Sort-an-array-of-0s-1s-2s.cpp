// Program to sort the array of 0s, 1s, 2s
// Brute Force : Simply apply sorting
// Better Approach: Take 3 variables named as count0, count1, count2. track the array and keep a count of 0's, 1's and 2's and then append them in the array
// Optimal Approach: take 3 pointers and then apply ternary search technique and then swap the elements accordingly


#include<bits/stdc++.h>
using namespace std;

void sortarray(vector<int>& arr){
    int n = arr.size();
    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = { 1,1,0,0,2,1,0};
    sortarray(arr);
    for(int i = 0;i<arr.size();i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}
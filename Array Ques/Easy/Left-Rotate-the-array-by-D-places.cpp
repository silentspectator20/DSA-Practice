//  Program to left rotate the array by d places
// Brute force Approach: 
// Step 1: Copy the last k elements into the temp array.
// Step 2 : Shift n - k elements from the beginning by k position to the right
// Step 3 : Copy the elements into the main array from the temp array.

// Optimal Approach:
// Step 1: Reverse the first k elements of the array
// Step 2 : Reverse the last n - k elements of the array
// Step 3 : Reverse the whole array.

#include<bits/stdc++.h>
using namespace std;

void LeftRotatebyDplaces(vector<int>&arr, int d){
    int n = arr.size();
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}

int main(){
    vector<int>arr = { 1,2,3,4,5,6,7};
    int n = arr.size();
    int d = 5;
    LeftRotatebyDplaces(arr,d);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
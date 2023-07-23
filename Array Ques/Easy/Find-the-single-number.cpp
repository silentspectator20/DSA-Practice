//  Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
//  Brute force Approach:
//  Better Approach: Using Hashmap calculate the frequency of all the elements of the array and then return the element with freq = 1
//  Optimal Approach: Using XOR operation and applying it to all the elements of the array, the resultant will be the number with single frequency
#include<bits/stdc++.h>
using namespace std;

int findsingleno(vector<int>&arr){
    int n = arr.size();
    int xxor = 0;
    for(int i = 0;i<n;i++){
        xxor=xxor^arr[i];
    }
    return xxor;
}

int main(){
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = findsingleno(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
//  Program to Remove the Duplicates in place in a sorted array
//  Brute Force Approach: Use a set and store all the values of the array and then display all the values of the set
//  Optimal Approach: Use two pointer approach to traverse the array with j pointer and update the values of the array when arr[i]!=arr[j]

#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(vector<int>& arr){
    int n = arr.size();
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    vector<int> arr = { 1,1,2,2,2,3,3,3,3};
    int n = arr.size();
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\nAfter Removing Duplicates\n";
    int res = RemoveDuplicates(arr);
    for(int i = 0;i<res;i++){
        cout<<arr[i];
    }
    return 0;
}
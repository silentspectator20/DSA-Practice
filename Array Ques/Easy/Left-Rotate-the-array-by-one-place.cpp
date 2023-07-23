// Program to left rotate the array by one position
/* Brute Force Approach : 1. Take another temp array 
                          2. Store the elements of the array arr into temp arr from index = 1
                          3. And then just add the 0th index element of the arr array into temp array as the last element
   Optimal Approach: Just take the first element of the array arr into temp variable and then push it at the end of the array arr after performing left shift in the array
*/



#include<bits/stdc++.h>
using namespace std;

void LeftRotateByOnePlace(vector<int>&arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i=1;i<=n-1;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = { 2,4,6,8,10};
    int n = arr.size();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter Left Rotating by One Place, the array becomes:\n";
    LeftRotateByOnePlace(arr);
    return 0;
}
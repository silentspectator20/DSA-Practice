#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&arr, int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum+arr[i];
    }
    int no = ((n*(n+1))/2) - sum;
    return no;
}

int main(){
    vector<int> arr = {1,3,4};
    int n = 4;
    int res = missing(arr, n);
    cout<<"The missing number is : "<< res;
    return 0;
}
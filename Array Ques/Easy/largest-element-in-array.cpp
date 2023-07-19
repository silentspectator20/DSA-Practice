#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>&arr){
    int n = arr.size();
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    vector<int> arr = {2, 6, 3, 1, 8};
    int res = largest(arr);
    cout<<"The largest number in array is: "<<res;
    return 0;
}

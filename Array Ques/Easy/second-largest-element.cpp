#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int>&arr){
    int n = arr.size();
    int max = INT_MIN;
    int sec_max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i]>sec_max && sec_max!=max){
            sec_max=arr[i];
        }
    }
    return sec_max;
}
int main(){
    vector<int>arr = { 1,2,3,4,6};
    int res = second_largest(arr);
    cout<<"The second largest element of the array is: "<< res;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int>&arr, int ele)
{
    int n = arr.size();
    for(int i = 0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}
 int main(){
    vector<int> arr = { 3, 6, 4, 2, 1};
    int ele = 4;
    int res = LinearSearch(arr, ele);
    if(res == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at "<< res+1<<" position"<<endl;
    }
    return 0;
 }
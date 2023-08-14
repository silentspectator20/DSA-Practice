// Check if a pair with given sum exists in Array and return the pair's indices.
// Brute force approach : Running 3 loops and then checking the sum pair with target and if its equal then returning it
// Optimal Approach: Using Hashing, by checking if the number needed is present in the map or not, if not then storing the current element in the map for further use.

#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>&arr, int target){
    int n = arr.size();
    unordered_map<int, int> mp;
    for(int i = 0;i<n;i++){
        int num = arr[i];
        int reqdNum = target-num;
        if(mp.find(reqdNum)!=mp.end()){
            return {mp[reqdNum],i};
        }
        mp[num]=i;
    }
    return {-1,-1};
}

int main(){
    vector<int> arr = { 1, 4, 5, 2, 0};
    int target = 9;
    vector<int> res = twosum(arr,target);
    for(int i = 0;i<res.size();i++){
        cout<< res[i]<<" ";
    }
    return 0;
}


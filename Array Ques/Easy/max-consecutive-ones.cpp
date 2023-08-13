// Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
// Brute Force + OPtimal Approach : \
// Take two variables count n max_count and then update them as and when 1 comes


#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>& nums){
    int count = 0;
    int max_count = 0;
    for(int i = 0;i<nums.size();i++){
    if(nums[i]==1)
    {
        count++;
    }
    else{
        count = 0;
    }
    max_count = max(max_count, count);
}
return max_count;
}

int main(){
    vector<int> nums = { 1,1,1,0,1,1};
    int res = maxConsecutiveOnes(nums);
    cout<<"The max consecutive ones are: "<<res;
    return 0;
}
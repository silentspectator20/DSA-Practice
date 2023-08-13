// Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
/*Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.
Brute Force Approach: taking 3 loops and then performing the addition operation and then comparing if the the sum of the subarray is equal to k 
and then just print its length
Optimal Approach : using 2 pointer approach

*/

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums, long long k){
    int maxLen = 0;
    int n = nums.size();
    int left = 0;
    int right = 0;
    long long sum = nums[0];
    while(right<n){
        while(left<=right && sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right<n){
            sum+=nums[right];
        }
    }
    return maxLen;

}

int main(){
    vector<int> nums = { 2,3,5,1,9};
    long long k = 10;
    int len = longestSubarray(nums,k);
    cout<<"Len of Subarray is : "<<len<<"\n";
    return 0;
}
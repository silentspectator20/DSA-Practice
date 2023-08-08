//  Program to move all the zeros of the array to the end of the array
//  Brute Force: Taking a Temporary Array
// Step 1: Take a Temp array and copy all the non-zero elements of the array from the original array to temp array 
// Step 2: Again take the temp and copy the non-zero elements to the original array
// Step3: Put all the other elements with zero in the original array
//  Optimal Approach: Two pointer Approach
// Step1: j will point to the first zero and i will point to the next index
/* 
First, using a loop, we will place the pointer j. If we don’t find any 0, we will not perform the following steps.
After that, we will point i to index j+1 and start moving the pointer using a loop.
While moving the pointer i, we will do the following:
If a[i] != 0 i.e. a[i] is a non-zero element: We will swap a[i] and a[j]. Now, the current j is pointing to the non-zero element a[i]. So, we will shift the pointer j by 1 so that it can again point to the first zero.
Finally, our array will be set in the right manner.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> movezerostoend(vector<int> &arr){
    int n = arr.size();
    int j = -1;
    // place the pointer j:
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    // no non-zero elements:
    if(j==-1)
    return arr;
    // Move the pointers i and j
    // and swap accordingly:
    for(int i = j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {1,0,4,0,0,5,9};
    vector<int> ans = movezerostoend(arr);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
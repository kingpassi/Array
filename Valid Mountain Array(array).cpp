/******************************************************************************
Valid Mountain Array

Given an array of integers arr, return true if and only if it is a valid 
mountain array.

Example 1:
Input: arr = [2,1]
Output: false

Example 2:
Input: arr = [3,5,5]
Output: false

Example 3:
Input: arr = [0,3,2,1]
Output: true
*******************************************************************************/
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int l=0;
        int r=arr.size()-1;
        
        while(l<arr.size()-1  && arr[l]<arr[l+1]) l++;
        while(r>0 && arr[r]<arr[r-1]) r--;
        
    return l==r && l!=0 && r!=arr.size()-1;
        
    }
};
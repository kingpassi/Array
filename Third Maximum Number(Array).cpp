/******************************************************************************
Third Maximum Number

Given an integer array nums, return the third distinct maximum number 
in this array. If the third maximum does not exist, return the maximum number.

Example 1:
Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.

Example 2:
Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned 
instead.
*******************************************************************************/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        long int m1=LONG_MIN;
        long int m2=LONG_MIN;
        long int m3=LONG_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m1 || nums[i]==m2 || nums[i]==m3){
                continue;
            }
            if(nums[i]>m1){
                m3=m2;
                m2=m1;
                m1=nums[i];
               
            }
           else if(nums[i]>m2){
                m3=m2;
                m2=nums[i];
            }
            else if(nums[i]>m3){
                m3=nums[i];
            }
            
        }
        if(m3==LONG_MIN){
            return (int)m1;
        }
        
        return (int)m3;
        
        
    }
};
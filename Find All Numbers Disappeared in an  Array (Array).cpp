/******************************************************************************
Find All Numbers Disappeared in an Array

Given an array nums of n integers where nums[i] is in the range [1, n],
return an array of all the integers in the range [1, n] that do not
appear in nums.

 

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]
*******************************************************************************/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      vector<int>ans;
      unordered_map<int,int>m;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        m[nums[i]]++;
      }
      
      for(int i=1;i<=n;i++)
      {
        if(m[i]==0)
        {
          ans.push_back(i);
        }
      }
      return ans;
        
    }
};


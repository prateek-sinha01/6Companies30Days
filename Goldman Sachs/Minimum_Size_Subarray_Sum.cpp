//Problem link : https://leetcode.com/problems/minimum-size-subarray-sum/

//Date : 05/01/2022
//Time complexity: O(n)
//Space complexity: O(1)

class Solution{
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int i=0,j=0,n=nums.size(),sum=0,res=INT_MAX;
        int f=0;
        while(j<n)
        {
            sum += nums[j];
            while(i<n && sum>=target)
            {
                res = min(res,j-i+1);
                sum -= nums[i++];
            }
            ++j;
        }
        return res == INT_MAX?0:res;
    }
}

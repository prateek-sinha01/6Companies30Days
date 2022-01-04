//Problem link : https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/

//Date : 05/01/2021
//Time Complexity : O(1)
//Space Complexity : O(1)

class Solution {
  public:
    int findPosition(int n , int m , int k) {
        if(n==1)
            return 1;
        int ans = (m%n)+(k-1);
        if(ans==n)
            return ans;
        else
            return ans%n;
    }
};

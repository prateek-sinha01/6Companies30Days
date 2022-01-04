//Problem link : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1

//Date : 05/01/2021
//Time Complexity : O(n)
//Space Complexity : O(1)

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long ans = 0, i = 0, j = 0, p = 1;
        while(i<n){
            p *= a[i];
            if(p>=k){
                while(p>=k)
                    p/=a[j++];
            }
            if(p<k)
                ans += i-j+1;
            i++;
        }
        return ans;
    }
};

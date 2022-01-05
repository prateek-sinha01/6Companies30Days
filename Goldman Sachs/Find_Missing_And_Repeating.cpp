//Problem link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

//Date : 05/01/2022
//Time Complexity: O(N)
//Auxiliary Space: O(1)

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans = new int[2];
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            if(v[arr[i]-1]>0)
                ans[0] = arr[i];
            v[arr[i]-1] = 1;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                ans[1] = i+1;
                break;
            }
        }
        return ans;
    }

//Problem link : https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/

//Date : 05/01/2021
//Time Complexity : O(n)
//Space Complexity : O(n)

class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    long long mod = 1e9+7;
		    int l = str.length();
		    int arr[l+1] = {0};
		    if(str[0] == '0')
		        return 0;
		    arr[0] = arr[1] = 1;
		    for(int i=2; i<=l; i++)
		    {
		        if(str[i-1]>'0')
		            arr[i] = arr[i-1]%mod;
		        if(str[i-2]=='1' || (str[i-2]=='2' && str[i-1]<'7'))
		            arr[i] = (arr[i] + arr[i-2])%mod;
		    }
		    return arr[l];
		}

};

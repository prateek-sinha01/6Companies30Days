//Problem link : https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/

//Date : 10/01/2022
//Time Complexity: O(LogN)
//Auxiliary Space: O(1)
    
class Solution{
public:
    string colName (long long int n)
    {
        string res="";
        while(n>0)
        {
            char temp = 'A' + (n-1)%26;
            res += temp;
            n = (n-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};    

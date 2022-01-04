//Problem link :  https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

//Date : 05/01/2021
//Time Complexity : O(n)
//Space Complexity : O(1)

string encode(string src)
{     
    //Your code here
    string s = "";
    s+=src[0];
    int l = 1;
    for(int i=1; i<src.length(); i++)
    {
        if(src[i]==src[i-1])
            l++;
        else
        {
            s+=l+'0';
            s+=src[i];
            l = 1;
        }
    }
    s+=l+'0';
    return s;
}

//Problem : https://practice.geeksforgeeks.org/problems/decode-the-string2444/1

//Date : 05/01/2022
//Time Complexity: O(|s|)
//Auxiliary Space: O(|s|)

class Solution{
public:
    string res(string& s,int& i)
    {
        string st="";
        while(i<s.length() && s[i]!=']')
        {
            if(isdigit(s[i]))
            {
                int temp=0;
                while(temp<s.length() && isdigit(s[i]))
                    temp = temp*10 + s[i++] - '0';
                ++i;
                string str = res(s,i);
                while(temp > 0){
                    st += str;
                    --temp;
                }
                ++i;
            }
            else
                st += s[i++];
        }
        return st;
    }
    string decodedString(string s)
    {
        int i=0;
        return res(s,i);
    }
}

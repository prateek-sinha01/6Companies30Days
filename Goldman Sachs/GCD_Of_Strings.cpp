//Problem link : https://leetcode.com/problems/greatest-common-divisor-of-strings/

//Date : 05/01/2022
//Time Complexity  : O(logN), N is the length of bigger string
//Space Complexity : O(1)

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str2.length()>str1.length())
        {
            return gcdOfStrings(str2,str1);
        }
        else if(str2.empty())
        {
            return str1;
        }
        else if(str1.substr(0,str2.length())!=str2)
        {
            return "";
        }
        return gcdOfStrings(str1.substr(str2.length()),str2);
    }
};

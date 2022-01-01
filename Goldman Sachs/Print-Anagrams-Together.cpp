//Problem Link : https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

//Date : 01/01/2022
//Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
//Space Complexity: O(N*|S|), where |S| is the length of the strings.

class Solution
{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) 
    {
        //code here
        vector<vector<string>> v;
        unordered_map<string, vector<string>> m;
        for(auto it:string_list)
        {
            string temp = it;
            sort(temp.begin(),temp.end());
            m[temp].push_back(it);
        }
        for(auto it:m)
            v.push_back(it.second);
        return v;
    }
};

//Problem link : https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

//Time complexity: O(n)
//Space complexity: O(k)
//Date : 10/01/2022

class Solution{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) 
    {
        // your code here
        deque<int> d;
        vector<int> v;
        int i=0,j=0;
        while(j<arr.size())
        {
            while(!d.empty() && d.back()<arr[j])
                d.pop_back();
            d.push_back(arr[j]);
            if((j-i+1)==k)
            {
                v.push_back(d.front());
                if(arr[i]==d.front())
                    d.pop_front();
                ++i;
            }
            ++j;
        }
        return v;
    }
};

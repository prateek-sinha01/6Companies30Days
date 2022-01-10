//Problem link : https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

//Date : 10/01/2022
//Time Complexity: O(N)
//Auxiliary Space: O(k)

class Solution{
    public:
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        list<int> l;
        vector<int> v;
        int i=0,j=0;
        while(j<n)
        {
            while(!l.empty() && l.back()<arr[j])
                l.pop_back();
            l.push_back(arr[j]);
            if((j-i+1)==k)
            {
                v.push_back(l.front());
                if(arr[i]==l.front())
                    l.pop_front();
                ++i;
            }
            ++j;
        }
        return v;
    }
};

//Problem link : https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/

//Date : 02/01/2021
//Time Complexity : O(1)
//Auxillary Space : O(1)

class Solution 
{
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) 
    {
        // code here
        if(L1[0]>R2[0] || R1[0]<L2[0])
            return false;
        if(L1[1]<R2[1] || R1[1]>L2[1])
            return false;
        return true;
    }
};

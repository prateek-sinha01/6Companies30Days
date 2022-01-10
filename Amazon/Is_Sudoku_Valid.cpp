//Problem link : https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/

//Date : 10/01/2022
//Time Complexity: O(N2)
//Auxiliary Space: O(N)

class Solution{
  piblic:
    int isValid(vector<vector<int>> mat)
    {
        int n=mat[0].size();
        for(int i=0;i<n;i++)
        {
            vector<int> c(9);
            vector<int> r(9);
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!=0)
                {
                    if(c[mat[i][j]-1]==0)
                        c[mat[i][j]-1]++;
                    else
                        return 0;
                }
                if(mat[j][i]!=0)
                {
                    if(r[mat[j][i]-1]==0)
                        r[mat[j][i]-1]++;
                    else
                        return 0;
                }
                if(i%3==0&&j%3==0)
                {
                    vector<int> v(9);
                    for(int k=i;k<(i+3);k++)
                    {
                        for(int l=j;l<(j+3);l++)
                        {
                            if(mat[k][l]!=0)
                            {
                                if(v[mat[k][l]-1]==0)
                                    v[mat[k][l]-1]++;
                                else
                                    return 0;
                            }
                        }
                    }
                }
            }
        }
        return 1;
    }
};

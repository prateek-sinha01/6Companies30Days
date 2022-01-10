//Problem link : https://leetcode.com/problems/rotting-oranges/

//Date : 10/01/2022
//Time complexity: O(m*n),m-rows,n-columns
//Space complexity: O(n)

class Solution{
  public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        vector<int> v={-1,0,1,0,-1}; 
        int m=grid.size();
        int n=grid[0].size(); 
        queue<pair<int,int>> q;
        int cnt=0; 
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                if(grid[i][j]==1)
                    ++cnt;
            }
        }
        int ans=-1; 
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                pair<int,int> p=q.front();
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int r=p.first+v[i];
                    int c=p.second+v[i+1];
                    if(r>=0 && r<m && c>=0 && c<n &&grid[r][c]==1)
                    {
                        grid[r][c]=2;
                        q.push({r,c});
                        --cnt; 
                    } 
                }
            }
            ++ans;
        }
        if(cnt>0) 
            return -1; 
        if(ans==-1) 
            return 0;
        return ans;
    }
};

class Solution {
public:
    void Bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>& grid){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n = grid.size();
        int m = grid[0].size();
        // Four directions: Up, Right, Down, Left
        int del_row[] = {-1, 0, 1, 0};
        int del_col[] = {0, 1, 0, -1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                    int n_row = row +del_row[i];
                    int n_col = col +del_col[i];
                    if((n_row>=0&&n_row<n)&&(n_col>=0&&n_col<m)&&(!vis[n_row][n_col])&&(grid[n_row][n_col]=='1')){
                        vis[n_row][n_col]=1;
                        q.push({n_row,n_col});
                    }
                }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt =0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col]&&grid[row][col]=='1'){
                    cnt++;
                    Bfs(row,col,vis,grid);
                }
            }
        }return cnt;
    }
};
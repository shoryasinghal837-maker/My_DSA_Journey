class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        queue<int>q;
        vector<int>color(v,-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                color[i]=0;
                q.push(i);
            }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto j : graph[node]) {

            if(color[j] == -1) {
                color[j] = !color[node];
                q.push(j);
            }
            else if(color[j] == color[node]) {
                return false;
                }
            }
        }
        }return true;
    }
};
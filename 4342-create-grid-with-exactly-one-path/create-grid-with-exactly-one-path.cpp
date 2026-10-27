class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string dot = string(n,'.');
        vector<string>ans;
        ans.push_back(dot);
        string block = string(n-1,'#')+'.';
        for(int i=1;i<m;i++){
            ans.push_back(block);
        }return ans;
    }
};
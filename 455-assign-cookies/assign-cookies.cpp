class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
       int i=0;
       int j=0;
       int numOfChild=g.size();
       int numOfCooKies=s.size();
       while(i<numOfChild&&j<numOfCooKies){
        if(s[j]>=g[i]){
            i++;
        }j++;
       }return i;
    }
};
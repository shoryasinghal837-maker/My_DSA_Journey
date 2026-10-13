class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
         vector<long long> sq;

        for (int x : nums) {
            sq.push_back(1LL * x * x);
        }
        sort(sq.begin(),sq.end(),greater<long long>());
        int n = sq.size();
        long long res=0;
        for(int i=0;i<(n+1)/2;i++){
            res += sq[i];
        }
        for(int i=(n+1)/2;i<n;i++){
            res -= sq[i];
        }return res;
    }
};
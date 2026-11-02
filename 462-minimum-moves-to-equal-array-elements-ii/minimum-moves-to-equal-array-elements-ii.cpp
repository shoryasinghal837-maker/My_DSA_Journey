class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int target = nums[n/2];
        long long oper=0;
        for(int i=0;i<n;i++){
            oper += abs(nums[i]-target);
        }return oper;
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int minElement=INT_MAX;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minElement) minElement = nums[i];
            sum += nums[i];
        }
        return sum-n*minElement;
    }
};
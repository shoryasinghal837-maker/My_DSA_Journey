class Solution {
public:
    int minMoves(vector<int>& nums) {
        int oper=0;
        int maxValue=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(maxValue<nums[i]) maxValue = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            oper += (maxValue-nums[i]);
        }return oper;
    }
};
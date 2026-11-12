class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc_ans = 1;
        int dec_ans = 1;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]<nums[j]){
                inc_ans = max(inc_ans,(j-i+1));
            }else{
                i = j;
            }
        }
        i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]>nums[j]){
                dec_ans = max(dec_ans,(j-i+1));
            }else{
                i = j;
            }
        }return max(inc_ans,dec_ans);
    }
};
class Solution {
public:
    bool isPossible(vector<int>& nums,int divisor, int threshold){
        int res=0;
        for(int i=0;i<nums.size();i++){
            res += (nums[i] + divisor - 1) / divisor;
        }
        return res<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = nums[0];
        for(int i=0;i<nums.size();i++){
            if(high<nums[i]) high = nums[i];
        }
        int ans = 0;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(isPossible(nums,mid,threshold)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }return ans;
    }
};
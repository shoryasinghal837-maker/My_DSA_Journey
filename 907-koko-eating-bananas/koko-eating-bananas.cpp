class Solution {
public:
    int function(vector<int>&piles,int eathr){
        int total_time=0;
        for(int i=0;i<piles.size();i++){
            total_time += ceil((double)piles[i] / eathr);
        }
        return total_time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
         int maxPile = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = maxPile;
        int ans;
        while(low<=high){
            int mid = high+(low-high)/2;
            int actual_mid = function(piles,mid);
            if(actual_mid<=h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }return ans;
    }
};
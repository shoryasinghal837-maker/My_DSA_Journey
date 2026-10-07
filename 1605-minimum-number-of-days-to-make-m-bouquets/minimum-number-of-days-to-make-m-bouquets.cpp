class Solution {
public:
    bool isPossible(vector<int>& bloomDay,int day,int m, int k){
        int numBoqt=0;
        int count =0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }else{
                numBoqt+=count/k;
                count=0;
            }
        }numBoqt+=count/k;
        return numBoqt>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) return -1;
        int low = bloomDay[0];
        int high = bloomDay[0];
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<low) low = bloomDay[i];
            if(bloomDay[i]>high) high = bloomDay[i];
        }
        int ans;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(isPossible(bloomDay,mid,m,k)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }return ans;
    }
};
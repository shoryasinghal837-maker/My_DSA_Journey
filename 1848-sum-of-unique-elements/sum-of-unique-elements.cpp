class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto x:freq){
            if(x.second==1){
                sum += x.first;
            }
        }return sum;
    }
};
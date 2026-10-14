class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        if(n==1||n==2){
            return 1;
        }
        long long firstTerm = 0;
        long long secondTerm = 1;
        long long thirdTerm = 1;
        for(int i=1;i<=n;i++){
            long long forthTerm = firstTerm+secondTerm+thirdTerm;
            firstTerm = secondTerm;
            secondTerm = thirdTerm;
            thirdTerm = forthTerm;
        }return firstTerm;
    }
};
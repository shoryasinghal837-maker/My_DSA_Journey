class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());
        if(n==0||power<tokens[0]) return 0;
        int i=0;
        int score=0;
        int maxScore = 0;
        int j=n-1;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                i++;
                score++;
                maxScore = max(maxScore, score);
            }else if(score>=1&&i<j){
                power+=tokens[j];
                j--;
                score--;
            }else{
                break;
            }
        }return maxScore;
    }
};
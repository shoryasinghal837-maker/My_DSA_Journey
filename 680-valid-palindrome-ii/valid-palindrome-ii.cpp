class Solution {
public:
    bool isPalindrome(string s,int l,int r){
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int i =0;
        int j =n-1;
        while(i<j){
            if(s[i]!=s[j]){
                return (isPalindrome(s,i+1,j)||isPalindrome(s,i,j-1));
            }else{
                i++;
                j--;
            }
        }return true;
    }
};
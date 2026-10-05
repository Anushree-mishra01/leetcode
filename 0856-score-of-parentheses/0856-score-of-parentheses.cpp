class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                ans++;
            }
            else if(s[i]==')'&&s[i-1]=='('){
                ans--;
                score+=pow(2,ans);
            }
            else{
                ans--;
            }
        }
        return score;
    }
};
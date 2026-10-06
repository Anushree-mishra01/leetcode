class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                string ans="";
                while(st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
                for(int j=0;j<ans.size();j++){
                    st.push(ans[j]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
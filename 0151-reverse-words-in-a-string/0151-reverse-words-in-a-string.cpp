class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int n=s.size();
        string temp="";
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                if(temp!=""){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans.push_back(' ');
                temp="";
                }
            }
            else{
                temp.push_back(s[i]);
            }
        }
        if(temp != "") {
            reverse(temp.begin(), temp.end());
            ans += temp;
        }
         if(ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};
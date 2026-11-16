class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.size();
       while(n>k){
        string ans="";
        for(int i=0;i<n;i+=k){
            string temp=s.substr(i,k);
            int sum=0;
            for(int j=0;j<temp.size();j++){
                sum+=temp[j]-'0';
            }
            ans+=to_string(sum);
        }
        s=ans;
        n=s.size();
       }
       return s;
    }
};
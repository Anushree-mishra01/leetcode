class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int count=0,flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else{
              if(count>0){
                count--;
              }
              else{
                flag++;
              }
            }
        }
        return flag+count;
    }
};
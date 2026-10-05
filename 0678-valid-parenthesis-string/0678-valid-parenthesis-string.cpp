class Solution {
public:
    bool checkValidString(string s) {
        int high=0;
        int low=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                high++;
                low++;
            }
            else if(s[i]==')'){
                low--;
                high--;
            }
            else{
                low--;
                high++;
            } 
        if(high<0){
            return false;
        }
        if(low<0){
            low=0;
        }
        }
        return low==0;
    }
};
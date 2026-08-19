class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_set<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j||j==k||k==i){
                        continue;
                    }
                    int key=digits[i]*100+digits[j]*10+digits[k];
                    if(key>=100 && key%2==0){
                        ans.insert(key);
                    }
                }
            }
        }
        return ans.size();
    }
};
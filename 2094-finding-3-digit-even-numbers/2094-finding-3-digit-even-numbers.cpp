class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_set<int>result;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j||j==k||k==i){
                        continue;
                    }
                    int ans=digits[i]*100+digits[j]*10+digits[k];
                    if(ans>=100 &&ans%2==0){
                        result.insert(ans);
                    }
                }
            }
        }
        vector<int>ans;
        for(int x:result){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
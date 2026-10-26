class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>freq;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                freq.push_back(i);
            }
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            for(int j=0;j<freq.size();j++){
                mini=min(mini,abs(i-freq[j]));
            }
            ans[i]=mini;
        }
        return ans;
    }
};
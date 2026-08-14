class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<int,int>freq;
        int n=s.size();
        int temp=0;
        int ans=0;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            while(freq[s[i]]>2){
                freq[s[temp]]--;
                temp++;
            }
            ans=max(ans,i-temp+1);
        }
        return ans;
    }
};
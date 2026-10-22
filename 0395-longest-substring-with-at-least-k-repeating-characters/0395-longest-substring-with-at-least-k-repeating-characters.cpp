class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.size();
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        
        for(int i=0;i<n;i++){
            if(freq[s[i]-'a']<k){
                string left=s.substr(0,i);
                string right=s.substr(i+1);
                return max(longestSubstring(left,k),longestSubstring(right,k));
            }
        }
        return n;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int max_len=0,max_freq=0,left=0,freq=0;
        int hash[26]={0};
        for(int i=0;i<n;i++){
            hash[s[i]-'A']++;
            max_freq=max(max_freq,hash[s[i]-'A']);
            int temp=i-left+1;
            if(temp-max_freq>k){
                hash[s[left]-'A']--;
                left++;
            }
            temp=i-left+1;
            max_len=max(max_len,temp);
        }
        return max_len;
    }
};
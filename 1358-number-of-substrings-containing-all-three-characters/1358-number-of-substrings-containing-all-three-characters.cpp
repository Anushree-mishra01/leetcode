class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        vector<int>freq(3,0);
        int count=0,left=0;
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
            while(freq[0]>0&&freq[1]>0&&freq[2]>0){
                count+=n-i;
                freq[s[left]-'a']--;
                left++;
            }
        }
        return count;
    }
};
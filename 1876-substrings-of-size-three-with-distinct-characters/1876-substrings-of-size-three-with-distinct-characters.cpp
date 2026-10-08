class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0;
        long long sum=0;
        int left=0;
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            if(i-left+1==3){
                if(freq.size()==3){
                    count++;
                }
                freq[s[left]]--;
                if(freq[s[left]]==0){
                    freq.erase(s[left]);
                }
                left++;
            }
        }
        return count;
    }
};
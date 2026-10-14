class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0,r=0,len=0,maxlen=0;
        unordered_map<int,int>freq;
        while(r<n){
            freq[fruits[r]]++;
            if(freq.size()>2){
                freq[fruits[l]]--;
                 if(freq[fruits[l]]==0){
                freq.erase(fruits[l]);
            }
                l++;
            }
           
            if(freq.size()<=2){
                len=r-l+1;
                maxlen=max(maxlen,len);
            }
            r++;
        }
        return maxlen;
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int x:arr){
            freq[x]++;
        }
        unordered_set<int>set;
        for(auto x:freq){
            set.insert(x.second);
        }
        if(freq.size()==set.size()){
            return true;
        }
        return false;
    }
};
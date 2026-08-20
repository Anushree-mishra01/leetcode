class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        sort(arr1.begin(),arr1.end());
        unordered_map<int,int>freq;
        for(int x:arr1){
            freq[x]++;
        }
        vector<int>result;
        for(int x:arr2){
            while(freq[x]>0){
                result.push_back(x);
                freq[x]--;
            }
        }
        for(int x:arr1){
            if(freq[x]>0){
                result.push_back(x);
                freq[x]--;
            }
        }
        return result;
    }
};
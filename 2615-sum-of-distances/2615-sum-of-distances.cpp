class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long> result(n,0);
        unordered_map<int,long long> sum;
        unordered_map<int,long long> count;
        for(int i=0;i<n;i++){
            int x=nums[i];
            result[i]+=(long long)i*count[x]-sum[x];
            count[x]++;
            sum[x]+=i;
        }
        sum.clear();
        count.clear();
        for(int i=n-1;i>=0;i--){
            int x=nums[i];
            result[i]+=sum[x]-(long long)i*count[x];
            count[x]++;
            sum[x]+=i;
        }
        return result;
    }
};
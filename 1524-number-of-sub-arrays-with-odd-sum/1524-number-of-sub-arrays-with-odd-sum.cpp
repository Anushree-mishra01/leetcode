class Solution {
    const int MOD=1e9+7;
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        long long count=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            count+=sum%2;
        }
        count+=((n-count)*count)%MOD;
        return count;
    }
};
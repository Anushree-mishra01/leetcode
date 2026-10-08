class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int left=0;
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(i-left+1==k){
                if(sum>=k*threshold){
                    count++;
                }
                sum-=arr[left];
                left++;
            }
        }
        return count;
    }
};
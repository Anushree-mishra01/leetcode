class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int max_index=max_element(nums.begin(),nums.end())-nums.begin();
        int min_index=min_element(nums.begin(),nums.end())-nums.begin();
        int temp=max(min_index,max_index);
        int key=min(min_index,max_index);
        int a=temp+1;
        int b=n-key;
        int c=key+1+n-temp;
        return min({a,b,c});
    }
};
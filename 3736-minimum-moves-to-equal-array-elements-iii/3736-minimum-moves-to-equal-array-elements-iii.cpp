class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(int x:nums){
            count+=maxi-x;
        }
        return count;
    }
};
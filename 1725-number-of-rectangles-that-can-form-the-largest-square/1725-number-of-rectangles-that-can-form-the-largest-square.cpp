class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& nums) {
        int m=nums.size();
        vector<int>ans;
        for(int i=0;i<m;i++){
            ans.push_back(min(nums[i][0],nums[i][1]));
        }
        int maxlen=0;
        for(int i=0;i<m;i++){
            maxlen=max(maxlen,ans[i]);
        }
        int count=0;
        for(int i=0;i<m;i++){
            if(ans[i]==maxlen){
                count++;
            }
        }
        return count;
    }
};
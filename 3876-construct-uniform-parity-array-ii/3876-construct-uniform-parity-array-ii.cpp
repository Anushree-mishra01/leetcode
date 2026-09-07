class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int key=INT_MAX;
        bool result=true;
        for(int x:nums1){
            key=min(key,x);
            if(x%2!=0){
                result=false;
            }
        }
        if(key%2!=0){
            return true;
        }
        return result;
    }
};
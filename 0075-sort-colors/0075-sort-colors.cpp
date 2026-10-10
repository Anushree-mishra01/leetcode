class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count=0, flag=0,key=0;
         for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else if(nums[i]==1){
                flag++;
            }
            else{
                key++;
            }
         }
         int i=0;
         while(count--){
            nums[i++]=0;
         }
         while(flag--){
            nums[i++]=1;
         }
         while(key--){
            nums[i++]=2;
         }
    }
};
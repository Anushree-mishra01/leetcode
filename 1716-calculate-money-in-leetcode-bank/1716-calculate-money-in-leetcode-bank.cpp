class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int temp=1;
        int key=1;
        for(int i=1;i<=n;i++){
            ans+=temp;
            temp++;
            if(i%7==0){
                key++;
                temp=key;
            }
        }
        return ans;
    }
};
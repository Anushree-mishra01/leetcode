class Solution {
public:
    bool canAliceWin(int n) {
        int temp=10,k=0;
        while(n>=temp){
            n-=temp;
            temp--;
            k++;
        }
        return k%2==1;
    }
};
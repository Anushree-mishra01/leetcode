class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0;
        int ten=0;
        for(int x:bills){
            if(x==5){
                five++;
            }
            else if(x==10){
                if(five==0){
                    return false;
                }
                five--;
                ten++;
            }
            else if(x==20){
                if(ten>0&&five>0){
                    five--;
                    ten--;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
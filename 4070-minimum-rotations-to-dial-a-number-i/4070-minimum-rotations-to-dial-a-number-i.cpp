class Solution {
public:
    int minRotations(string s) {
        int count=0;
        int n=s.size();
        int key=0;
        for(int i=0;i<n;i++){
            int temp=s[i]-'0';
            count+=min(abs(key-temp),10-abs(key-temp));
            key=temp;
        }
        return count;
    }
};
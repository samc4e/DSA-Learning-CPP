class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        int cnt=10;
        int i=0;
        while(n>0 && cnt!=0){
            if(cnt>n)break;
            n-=cnt;
            cnt--;
            i++;
        }
        if(i%2==0 && cnt>n){
            return false;
        }
        return true;
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        int copy=x;
        long long revNum=0;
        while(x>0){
            int lastdigit=x%10;
            revNum=(revNum*10)+lastdigit;
            x=x/10;
        }
        if(revNum==copy) return true;
        return false;
    }
};
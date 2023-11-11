class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int temp=x;
        int digit;
        long int a=0;
        while(x!=0){
            digit=x%10;
            a=a*10+digit;
            x=x/10;
        }
        if(temp==a)return true;
        else return false;
        
    }
};
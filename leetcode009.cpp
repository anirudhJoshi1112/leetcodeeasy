class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long reverse=0,main=x;
        while(main>0){
            reverse = reverse*10 + main % 10;
            main/=10;
        }
        return reverse ==x;
    }
};

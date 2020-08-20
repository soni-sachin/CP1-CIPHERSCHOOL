class Solution {
public:
    bool isPalindrome(int x) {
        string res;
        int yy = x;        
        if(x<0){return false;}
        int le = to_string(x).length();
        if(x == 0 || le==1){return true;}
        for(int i=0;i<le;i++){
            res = res + to_string(x%10);
            x = x/10;
        }
        if(res == to_string(yy)){return true;}
    return false;
    }
};

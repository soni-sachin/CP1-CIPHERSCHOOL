class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        paranhelper(0, 0, n,"");
        return res;
    }
    void paranhelper(int a,int b, int n,string s){
        
        if(b>a || a > n){
            return;
        }
        if(a == b && b ==n){
            res.push_back(s);
            return;
        }
        paranhelper(a+1,b,n, s+"(");
        paranhelper(a,b+1,n , s+")");
    }
};


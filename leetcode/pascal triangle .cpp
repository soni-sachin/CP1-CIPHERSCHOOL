class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        int s =1;
        for(int i=0;i<numRows;i++){
            vector<int> ins(s);
            res.push_back(ins);
            for(int j=0;j<=i;j++){
                if(i==j){
                    res[i][j] = 1;
                }
                else if(j==0){
                    res[i][j] =1;
                }
                else{
                res[i][j] = res[i-1][j] + res[i-1][j-1]; 
            }
            }
            s++;
        }
        return res;
    }
};

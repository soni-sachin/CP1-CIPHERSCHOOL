#define INTMAX 9999
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[coins.size()+1][amount+1];
        if(amount ==0){return 0;}
        for(int i=0;i<=coins.size();i++){
            for(int j=0;j<=amount;j++){
                if(i==0 ||j==0){
                    dp[i][j] = INTMAX;
                }
                else{
                    if(coins[i-1]>j){
                        dp[i][j] = dp[i-1][j];
                    }
                    else if(coins[i-1]==j){
                        dp[i][j] = 1;
                    }
                    else{
                        dp[i][j] = min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                    }
                }
                
            }
        }
         if(dp[coins.size()][amount]==INTMAX)
            return -1;
			
        return dp[coins.size()][amount];
        
    }
};


class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'I')
            {
                if(s[i+1] == 'V')
                {
                    i++;
                    ans += 4;
                }
                else if(s[i+1] == 'X')
                {
                    i++;
                    ans += 9;
                }
                else
                    ans += 1;
            }
            
            else if(s[i] == 'X')
            {
                if(s[i+1] == 'L')
                {
                    i++;
                    ans += 40;
                }
                else if(s[i+1] == 'C')
                {
                    i++;
                    ans += 90;
                }
                else
                    ans += 10;
            }
            
            else if(s[i] == 'C')
            {
                if(s[i+1] == 'D')
                {
                    i++;
                    ans += 400;
                }
                else if(s[i+1] == 'M')
                {
                    i++;
                    ans += 900;
                }
                else
                    ans += 100;
            }
            else if(s[i] == 'V')
                ans += 5;
            
            else if(s[i] == 'L')
                ans += 50;
            
            else if(s[i] == 'D')
                ans += 500;
            else
                ans += 1000;
        }
        return ans;
    }
};

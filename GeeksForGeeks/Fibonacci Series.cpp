#include<iostream>
using namespace std;
class Solution {
public:
    int sum = 0;
    int fib(int N) 
    {
     if(N == 0)
     {
         return 0;
     }
        else if(N==1)
        {
            return 1;
        }
        else
        {
            return fib(N-1) + fib(N-2);
        }
    }
};
int main()
{
  int a;
  cout<<"Enter Input = ";
  cin>>a;
  Solution ob1;
  int result = ob1.fib(a);
  cout<<result;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long X;
    cin>>X;
    long long firstDigit=X;
    while(firstDigit>=10)
    firstDigit/=10;
    {
     if(firstDigit % 2 ==0)
      {
        cout<< "EVEN" <<endl;
      }
      else
      {
        cout<< "ODD" <<endl;
      }
    }
}
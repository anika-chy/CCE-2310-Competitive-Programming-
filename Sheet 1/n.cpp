#include <bits/stdc++.h>
using namespace std;
int main()
{
    char X;
    cin>>X;
    if(islower(X))
    {
    cout<< char (toupper(X)) <<endl;
    }
    else if(isupper(X))
    {
      cout<< char (tolower(X)) <<endl;
    }
}
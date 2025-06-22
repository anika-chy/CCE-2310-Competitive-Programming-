#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
     cin>>n;
     string s;
     cin>>s;                                                                                                                                                                                                                             long long sum=0;
    for(int i=0;i<n;i++)
        sum= sum +(int)(s[i]-'0');
        cout<<sum<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long row;
    cin>>row;
    for(long long Line=1;Line<=row;Line++)
    {
        for(long long space=1;space<=(row-Line);space++)
{
        cout<<" ";
}
    for(long long star=1;star<=(2*Line)-1;star++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}

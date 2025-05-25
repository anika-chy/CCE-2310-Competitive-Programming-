#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(int line=1;line<=n;line++)
    {
        for(int space =1;space<=(n-line);space++)
        {
            cout<<" ";
        }
       for(int star =1;star<=(2*line)-1;star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(int line=n;line>=1;line--)
    {
        for(int space =1;space<=(n-line);space++)
        {
            cout<<" ";
        }
        for(int star =1;star<=(2*line)-1;star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

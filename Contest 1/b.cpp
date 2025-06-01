#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,k;
cin>>a>>b>>k;
bool aDivisible = (a%k==0);
bool bDivisible = (b%k==0);
if(aDivisible && bDivisible)
    {
        cout<<"Both"<<endl;
    }else if (aDivisible){
    cout<<"Memo"<<endl;
    }else if (bDivisible){
    cout<<"Momo"<<endl;
    }else{
    cout <<"No One"<<endl;
    }
    return 0;
}
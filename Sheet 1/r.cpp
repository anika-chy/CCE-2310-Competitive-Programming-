#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    long long years = N/365;
    long long remaining_days= N % 365;
    long long months = remaining_days /30;
    long long days= remaining_days  % 30;
    cout<< years << " years" <<endl;
    cout<< months <<" months" <<endl;
    cout<< days <<" days" <<endl;
    
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    char S;
    cin >> A >> S >> B;

    bool iscorrect = false;

    if (S == '<') {
        iscorrect = (A < B);
    }
    else if (S == '>') {
        iscorrect = (A > B);
    }
    else if (S == '=') {
        iscorrect = (A == B);
        }

    if (iscorrect) {
        cout << "Right" << endl;
    }
    else {
        cout << "Wrong" << endl;
    }

    return 0;
}
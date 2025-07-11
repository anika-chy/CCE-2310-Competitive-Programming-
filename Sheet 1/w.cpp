#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C;
    char op, eq;
    cin >> A >> op >> B >> eq >> C;

    long long result;

    if (op == '+') {
        result = A + B;
    } else if (op == '-') {
        result = A - B;
    } else if (op == '*') {
        result = A * B;
    }

    if (result == C) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
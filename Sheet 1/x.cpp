#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long left = max(l1, l2);
    long right = min(r1, r2);

    if (left > right) {
        cout << -1 << endl;
    } else {
        cout << left << " " << right << endl;
    }

    return 0;
}
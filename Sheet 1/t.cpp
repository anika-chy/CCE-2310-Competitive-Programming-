#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    long long sorted[3] = {A, B, C};
    sort(sorted, sorted + 3);
    for (int i = 0; i < 3; i++) {
        cout << sorted[i] << endl;
    }

    cout << endl; 
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
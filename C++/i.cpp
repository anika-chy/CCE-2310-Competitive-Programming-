#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    int a = N.size();
    string ss = "";

    for (int i = a - 1; i >= 0; i--) {
        ss += N[i];
    }
    bool flag = false;
    string ans = "";
    for (int j = 0; j < ss.size(); j++) {
        if (ss[j] != '0') flag = true;
        if (flag) ans += ss[j];
    }

    cout << ans << endl;

    if (N != ss) {
        cout << "NO" << endl;
    } else {
        if (N[0] == '0') {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

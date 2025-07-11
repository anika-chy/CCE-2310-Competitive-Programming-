#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    long long minimum = min({A, B, C});
    long long maximum = max({A, B, C});

    cout << minimum << " " << maximum << endl;
}

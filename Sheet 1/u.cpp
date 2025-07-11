#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;

    if (N == int(N)) {
        cout << "int " << int(N) << endl;
    } else {
        int intPart = int(N);
        double floatPart = N - intPart;

        cout << "float " << intPart << " ";
        cout << fixed << setprecision(3) << floatPart << endl;
    }

    return 0;
}

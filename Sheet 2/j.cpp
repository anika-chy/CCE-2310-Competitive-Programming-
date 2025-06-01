#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    bool a[N + 1];

    for (int i = 0; i <= N; i++) {
        a[i] = true;
    }

    a[0] = a[1] = false;

    for (int j = 2; j * j <= N; j++) {
        if (a[j] == true) {
            for (int k = j * j; k <= N; k += j) {
                a[k] = false;
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        if (a[i] == true) {
            cout << i << " "; 
        }
    }

    cout << endl; 

    return 0;
}

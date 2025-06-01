#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n == 0)
        {
            cout << "0\n";
            continue;
        }

        vector<int> digits;

        while (n > 0)
        {
            digits.push_back(n % 10);
            n /= 10;
        }

        for (int i = 0; i < digits.size(); ++i)
        {
            cout << digits[i];
            if (i != digits.size() - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

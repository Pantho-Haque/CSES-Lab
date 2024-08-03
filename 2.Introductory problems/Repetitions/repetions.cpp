#include <bits/stdc++.h>
using namespace std;
#define q     \
    int n;    \
    cin >> n; \
    for (int i = 1; i < n; i++)
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m = 0, cnt = 0;
    char lastChar = ' ';
    string s;
    cin >> s;

    for (auto x : s)
    {
        // cout << x << " " << lastChar;

        if (x == lastChar)
        {
            cnt++;
        }
        else
        {
            lastChar = x;
            cnt = 1;
        }
        m = max(m, cnt);

        // cout << cnt << endl;
    }
    cout << m << endl;
    return 0;
}
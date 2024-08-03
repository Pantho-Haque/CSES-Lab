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

    ll n;
    cin >> n;
    vector<int> v(n - 1);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    for (ll i = 1; i <= n; i++)
    {
        if (v[i - 1] != i)
        {
            cout << i;
            return 0;
        }
    }

    return n;
}
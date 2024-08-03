#include <bits/stdc++.h>
using namespace std;
#define q     \
    int n;    \
    cin >> n; \
    for (int i = 1; i < n; i++)
#define ll long long int
#define swap(x, y) \
    int temp;      \
    temp = x;      \
    x = y;         \
    y = temp

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                cnt++;
            }

    cout << cnt << endl;

    return 0;
}
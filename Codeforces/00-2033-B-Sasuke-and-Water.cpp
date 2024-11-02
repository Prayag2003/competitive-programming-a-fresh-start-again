// LINK: https://codeforces.com/problemset/problem/2033/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define MOD 1000000007
#define MOD1 998244353
#define fon for (ll i = 0; i < n; i++)

void Prag2003()
{
    ll n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> v[i][j];
        }
    }
    int ans = 0;

    for (int start = n - 1; start >= 0; --start)
    {
        int mini = INT_MAX;
        int r = start, c = 0;

        while (r < n && c < n)
        {
            mini = min(mini, v[r][c]);
            r++;
            c++;
        }

        if (mini < 0)
        {
            ans += -mini;
        }
    }

    for (int start = 1; start < n; ++start)
    {
        int mini = INT_MAX;
        int r = 0, c = start;

        while (r < n && c < n)
        {
            mini = min(mini, v[r][c]);
            r++;
            c++;
        }

        if (mini < 0)
        {
            ans += -mini;
        }
    }

    cout << ans << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        Prag2003();
}
// Link: https://codeforces.com/contest/2033/problem/A

// Author :- Prayag Bhatt
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

    int c = 1;
    int val = 0;
    while (val <= n && val >= -1 * n)
    {
        if (c % 2)
        {
            val -= (2 * abs(c) - 1);
        }
        else
        {
            val += (2 * abs(c) - 1);
        }
        c++;
    }

    if (c % 2)
        cout << "Kosuke\n";
    else
        cout << "Sakurako\n";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        Prag2003();
}
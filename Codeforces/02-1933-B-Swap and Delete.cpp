// Author :- Prayag Bhatt
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void Prag2003()
{
    string s;
    cin >> s;

    int len = s.size();
    int ones = 0, zeros = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0')
            zeros++;
        else
            ones++;
    }
    int swaps = min(ones, zeros);
    int cost = (ones - swaps) + (zeros - swaps);
    cout << cost << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        Prag2003();
}
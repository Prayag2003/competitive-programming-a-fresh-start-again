#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    p = make_pair(1, "apple");

    cout << p.first << " " << p.second << "\n";

    // making a copy
    pair<int, string> p_dash = p;
    cout << p.first << " " << p.second << "\n";

    // using the reference (use &)
    pair<int, string> &p_address = p;
    p_address.first = 2;
    cout << p.first << " " << p.second << "\n";

    // pairs required to maintain the relation between 2 arrays/ vectors
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    pair<int, int> arr[3];

    for (int i = 0; i < 3; ++i)
    {
        arr[i] = {a[i], b[i]};
    }
    swap(arr[0], arr[2]);
    for (int i = 0; i < 3; ++i)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }

    pair<int, string> p1 = make_pair(1, "apple");
    pair<int, string> p2 = make_pair(2, "banana");

    // 0 (false), as p1.first != p2.first
    cout << (p1 == p2) << "\n";
    // 1 (true), because p1.first < p2.first
    cout << (p1 < p2) << "\n";

    // NOTE: Unpack the elements using TIE
    int a_new, a2;
    string b_new;
    pair<int, string> p3 = {7, "mango"};
    tie(a_new, b_new) = p3;
    cout << a_new << " " << b_new << "\n";

    tie(a2, std::ignore) = p3;
    cout << a2 << "\n";
}
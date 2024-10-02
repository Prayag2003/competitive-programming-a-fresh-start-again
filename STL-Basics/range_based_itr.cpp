#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    for (int &val : a)
    {
        cout << val << " ";
    }
    cout << "\n";

    // NOTE: Dynamically determines the data type
    auto b = 1;
    cout << b << "\n";
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << (*it) << "\n";
    cout << (*(it + 1)) << "\n";

    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // NOTE: it++ -> moves to next iterator
    // it + 1 -> moves to next location

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator itt;
    for (itt = v_p.begin(); itt != v_p.end(); ++itt)
    {
        cout << (*itt).first << " " << (*itt).second << "\n";
        cout << itt->first << " " << itt->second << "\n";
        // (*itt).first == = itt->first
    }
}
#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &mp)
{
    for (auto &i : mp)
        cout << i.first << " " << i.second << "\n";
    cout << "\n";
}
int main()
{
    // NOTE: Maps are internally implemented using Red-Black Trees...
    // Map store in sorted order
    map<int, string> mp;

    // IMPORTANT: Insertion time is O(log N) + it stores unique values only, it will override if the new value for the same key is being added
    mp[1] = "abc";
    mp[3] = "def";
    mp[2] = "ghi";
    mp[7];
    printMap(mp);

    auto find_3_iterator = mp.find(3);
    if (find_3_iterator != mp.end())
    {
        cout << "3 is present\n";
    }

    // Erase operation O(log N)
    if (mp.find(1) != mp.end()) // safety check
        mp.erase(1);
    printMap(mp);

    if (mp.find(99) != mp.end())
        mp.erase(mp.find(99));
    printMap(mp);

    // IMPORTANT: Insertion in map also depends on key

    // -------------------------- UNORDERED_MAPS ----------------------------
    // Uses hash tables under the hood
    // The average insertion time complexity is O(1)
    unordered_map<int, int> ump;

    // Major difference is that complex keys cant be used unlike in Maps since the inbuilt comparison between complex containers is not present...

    // NOTE: Multi-Map can be used to store the same keys but with diff values -> duplicates allowed
}
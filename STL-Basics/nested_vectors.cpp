#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{
    cout << "Size: " << v.size() << "\n"; // O(1)
    for (int i = 0; i < v.size(); ++i)
        cout << v[i].first << " " << v[i].second << "\n";
    cout << "\n";
}

int main()
{
    vector<pair<int, int>> v;
    printVec(v);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    printVec(v);

    // Array of vectors
    int N;
    cin >> N;
    vector<int> vec_arr[N]; // N vectors of size 0
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            vec_arr[i].push_back(x);
        }
    }

    // NOTE: Vector of vectors
    vector<vector<int>> vec_of_vec;
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        vec_of_vec.push_back(temp);
    }
}
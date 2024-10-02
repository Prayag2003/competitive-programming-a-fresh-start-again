#include <bits/stdc++.h>
using namespace std;
// Globally the max size of the vector can be 1e7
// Locally the max size of the vector can only be 1e5 in online websites

void printVec(vector<int> &v)
{
    cout << "Size: " << v.size() << "\n"; // O(1)
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << "\n";
}

int main()
{
    vector<int> a;
    for (int i = 1; i <= 10; ++i)
    {
        a.push_back(i); // O(1)
    }
    printVec(a);

    vector<int> v(5);
    printVec(v);

    vector<int> instantiate_and_fill(10, 3);
    printVec(instantiate_and_fill);
    instantiate_and_fill.pop_back(); // O(1)
    printVec(instantiate_and_fill);

    // Unlike arrays which copies the same pointer on COPY operation, the vectors perform actual copy O(N)
    vector<int> v1 = v;

    // NOTE: Copying is an expensive operation, thus pass by reference, if we dont intend to change the value of the vector
}
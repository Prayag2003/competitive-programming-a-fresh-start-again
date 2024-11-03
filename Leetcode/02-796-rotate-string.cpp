// Link: https://leetcode.com/problems/rotate-string/description/?envType=daily-question&envId=2024-11-03

// Author :- Prayag Bhatt
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution
{
public:
    bool rotateString(string s, string goal)
    {

        if (s.size() != goal.size())
            return false;

        string doubleString = s + s;
        size_t findSubstrIndex = doubleString.find(goal);

        if (findSubstrIndex != string::npos)
        {
            return true;
        }

        return false;
    }
};
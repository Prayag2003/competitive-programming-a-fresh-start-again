// Question:
// https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string makeFancyStringOptimal(string s)
    {
        if (s.size() <= 2)
            return s;

        string ans;
        ans += s[0];
        ans += s[1];

        for (int i = 2; i < s.size(); ++i)
        {
            if (s[i] != ans.back() || s[i] != ans[ans.size() - 2])
            {
                ans += s[i];
            }
        }

        return ans;
    }

    string makeFancyStringApproach1(string s)
    {
        int i = 0;
        char a, b, c;
        string ans = "";

        if (s.size() <= 2)
            return s;

        while (i + 2 < s.size())
        {
            a = s[i];
            b = s[i + 1];
            c = s[i + 2];

            ans.push_back(a);

            if (a == b && b == c)
            {
                ans.pop_back();
            }

            i++;
        }

        while (i < s.size())
        {
            ans.push_back(s[i]);
            i++;
        }
        return ans;
    }
};

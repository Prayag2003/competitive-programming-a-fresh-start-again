// Question: https://leetcode.com/problems/circular-sentence/description/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isCircularSentenceOptimal(string sentence)
    {
        for (int i = 0; i < sentence.size(); ++i)
        {
            if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1])
                return false;
        }
        return sentence[0] == sentence[sentence.size() - 1];
    }

    bool isCircularSentence(string sentence)
    {
        vector<string> words;
        stringstream ss(sentence);
        string word;

        while (ss >> word)
        {
            words.push_back(word);
        }

        int n = words.size();
        char last = words[n - 1].back();

        for (int i = 0; i < n; ++i)
        {
            if (words[i].front() != last)
            {
                return false;
            }
            last = words[i].back();
        }

        return true;
    }
};
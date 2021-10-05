/*
Given two first names of two persons, please calculate name proximity score. Name proximity score is calculated as follows:

• if a letter occurs in the same position in both names, the score Increments by two. • If a letter occurs in both names, but in different positions, the score is incremented by 1.
• Once a letter in a position is used for comparison it cannot be considered again. However, if the same letter occurs in another
position, it can be used.

input. The first line contains the first name & the second line contains the second name Output: Only an integer value, showing the name proximity score

Sample test case:

Input:

Amitabi

Ajitabh

Output:

12

Input:

Ryaan

Nagesh

Output:

2
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    unordered_set<int> myset;
    int res=0;
    for(int i = 0; i < s1.size() and i < s2.size(); i++)
    {
        if(myset.find(i) == myset.end() and s1[i] == s2[i])
        {
            myset.insert(i);
            res += 2;
        }
    }
    unordered_map<char, int> umap;
    for(int i = 0; i < s1.size(); i++)
    {
        umap[s1[i]] += 1;
    }
    for(int i = 0; i < s2.size(); i++)
    {
        if(umap.count(s2[i]))
        {
            if(myset.find(i) != myset.end())
                res += (umap[s2[i]] - 1);
            else 
                res = res + umap[s2[i]];
        }
    }
    cout << res << endl;
}

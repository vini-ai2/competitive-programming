/*
Longest Substring Without Repeating Characters
*/

#include<algorithm>
#include<iostream>
#include<unordered_set>
using namespace std;



int main()
{
    string s;
    cin>>s;

    unordered_set<char> mp;
    int l = 0;
    int ans = 0;

    for(int r = 0;r<s.size();r++)
    {
        while(mp.find(s[r])!= mp.end())
        {
        mp.erase(s[l]);
        l++;
        }
        mp.insert(s[r]);
        ans = max(ans, r-l+1);

    }
    cout<<ans;
}
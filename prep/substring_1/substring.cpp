/*
Challenge is to identify the number of substrings in the given string. 
ex: "ababa"

*/

#include<iostream>
using namespace std;

bool isP(string& s, int i, int j)
{
    while(i<j)
    {
        if(s[i]!=s[j]) return false;
        
        i++;
        j--;
    }
    return true;
}

int countPS(string& s)
{
    int n = s.length();
    int res = 0;

    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            if(isP(s, i, j))
            res++;
        }
    }
    return res;
}

int main()
{
    string s;
    cin>>s;

    cout<<countPS(s);
}
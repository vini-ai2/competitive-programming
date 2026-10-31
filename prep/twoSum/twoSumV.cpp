/*
the same thing using unordered maps, and vectors. */

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n, target;
    cin>>n;

    int arr[10];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    unordered_map<int, int> mp;

    for(int i = 0;i<n;i++)
    {
        int complement = target - arr[i];

        if(mp.find(complement)!=mp.end())
        {
            int previdx = mp[complement];
            cout<<mp[complement]<< i;
            return 0;
        }
        else
        {
            mp[arr[i]] = i;
        }
    }
}
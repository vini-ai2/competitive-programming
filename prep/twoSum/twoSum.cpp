/*
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]
*/
#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int rem;
    cin>>rem;
    int scope = 0;
    int out[10];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i]+arr[j] == rem)
            {
                out[scope] = i;
                scope++;
                out[scope] = j;
                scope++;
            }

        }
    }
    for(int i=0;i<scope;i++)
    {
        if(i%2 == 0)
        {
            cout<<"\n";
        }
        cout<<out[i]<<" ";
        
    }
}
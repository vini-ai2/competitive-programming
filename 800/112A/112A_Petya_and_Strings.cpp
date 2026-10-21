/*
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
*/

#include<iostream>
#include<stdio.h>
#include<cctype>
using namespace std;

int main()
{
    string s1;
    string s2;

    cin>>s1>>s2;

    int l1 = s1.length();
    int l2 = s2.length();

    for(char &c: s1)
    {
        c = std::tolower(static_cast<unsigned char>(c));
    }
    
    for(char &f: s2)
    {
        f = std::tolower(static_cast<unsigned char>(f));
    }

    if(s1 == s2)
    {
        cout<<0;
    }
    else if(s1<s2)
    {
        cout<<-1;
    }
    else
    cout<<1;
    

    
}

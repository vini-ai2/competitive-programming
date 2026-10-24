/*
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.*/

#include<iostream>
using namespace std;
#include <cctype>

int main()
{
    string s;
    cin>>s;
    string w = "";
    int j = 0;

    for(char &c:s)
    {
        c = tolower(c);
    }

    for(int i = 0;i<s.length();i++)
    {
        
        //delete all the vowels and attach a . before a consonant
        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'))
        {
        /*w[j] = '.';
        w[j+1] = s[i];
        j++;*/
            w.push_back('.');
            w.push_back(s[i]);
        }
        
    }

    cout<<w;
}
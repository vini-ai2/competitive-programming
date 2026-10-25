/*
Vanya and Vova are playing a game. Players are given an integer n
. On their turn, the player can add 1
 to the current integer or subtract 1
. The players take turns; Vanya starts. If after Vanya's move the integer is divisible by 3
, then he wins. If 10 moves have passed and Vanya has not won, then Vova wins.

Write a program that, based on the integer n
, determines who will win if both players play optimally.

Input
The first line contains the integer t
 (1≤t≤100
) — the number of test cases.

The single line of each test case contains the integer n
 (1≤n≤1000
).

Output
For each test case, print "First" without quotes if Vanya wins, and "Second" without quotes if Vova wins.*/

#include<iostream>
using namespace std;

int main() {
  int t; std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    std::cout << (n%3 ? "First\n" : "Second\n");
  }
}


//     for(int i = 0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"First";
//     for(int i = 0;i<n;i++)
//     {
//         if(arr[i]%3 == 0)
//         {
//             if(turn[0] == 0)
//             {
//                 cout<<"Second\n";
//                 turn[0] = 1;
//                 turn[1]++;
//             }
//             else
//             {
//                 cout<<"First\n";
//                 turn[0] = 0;
//                 turn[1]++;
//             }
//         }
//         else
//         {
//             if(turn[0] == 0)
//             {
//                 cout<<"First\n";
//                 turn[1]++;
//             }
//             else
//             {
//                 cout<<"Second\n";
//                 turn[1]++;
//             }
//         }

//     }
// }

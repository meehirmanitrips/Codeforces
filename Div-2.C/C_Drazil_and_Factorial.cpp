/* Here the logic is to simply break the non prime digits into
smaller prime numbers and then sort them in ascending order also take input
as string because of the leading zeroes. */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007

string str[10] = {"", "", "2", "3", "223", "5", "35", "7", "2227", "3327"};

int main()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    string s2;
    for (int i = 0; i < n; i++)
    {
        s2 += str[s1[i] - '0'];
    }
    sort(s2.begin(), s2.end());
    reverse(s2.begin(), s2.end());
    cout << s2 << "\n";
    return 0;
}
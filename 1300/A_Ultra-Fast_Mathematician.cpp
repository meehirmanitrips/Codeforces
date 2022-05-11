#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i)
    {
        if (s1[i] == s2[i])
        {
            s3 += '0';
        }
        else
        {
            s3 += '1';
        }
    }
    cout << s3 << endl;
    return 0;
}
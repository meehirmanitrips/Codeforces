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
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3;
    s4 = s1 + s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());
    if (s4 == s3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
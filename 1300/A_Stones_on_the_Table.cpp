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
    ll n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
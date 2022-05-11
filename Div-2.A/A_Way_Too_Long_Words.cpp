#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    if (s.length() <= 10)
    {
        cout << s << endl;
        return;
    }
    cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
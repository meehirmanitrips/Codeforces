#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007
void solve(ll n)
{
    ll count = 0;
    vl v;
    for (int i = 1; i < n + 1; ++i)
    {
        if (i & 1)
        {
            count += 2;
            v.pb(count);
        }
        else
        {
            v.pb(count - 1);
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        solve(n);
    }
    return 0;
}
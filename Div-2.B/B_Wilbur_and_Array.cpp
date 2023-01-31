#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007

/* Here the logic is that if once we set the first elememt equal to a[0] all
the next all elements will be equal to a[0] hence after that we will only
need to calculate a[i]-a[i-1] for the no of steps required to reach a[i] */

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = abs(a[0]);
    for (int i = 1; i < n; i++)
    {
        cnt += abs(a[i] - a[i - 1]);
    }
    cout << cnt << "\n";
    return 0;
}
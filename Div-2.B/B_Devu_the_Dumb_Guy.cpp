#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007

ll a[100005];

int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (a[i] * max(x - i, 1));
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007

/* Here the logic is to sort the first array and then just calculate
the upper bound to find the no of elements less than the current element */

int main()
{
    int n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    ll ans[m];
    for (int i = 0; i < m; i++)
    {
        ans[i] = upper_bound(a, a + n, b[i]) - a;
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
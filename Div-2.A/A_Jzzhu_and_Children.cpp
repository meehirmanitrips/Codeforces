/* Here we can observe that the child with the highest ceiling value upon division
by m will go last. The only edge case is when more than one child has the same
ceiling value, so in that case the child who was the farthest in the original
line will be last. */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define mod 1000000007
#define fo(i, a, b) for (i = a; i < b; i++)
#define fo2(i, a, b) for (i = a; i >= b; i--)

int main()
{
    int n, m, i, j = 0, ans = 0;
    cin >> n >> m;
    int a[n];
    fo(i, 0, n)
    {
        cin >> a[i];
        if ((a[i] + m - 1) / m > j)
        {
            j = (a[i] + m - 1) / m;
            ans = i + 1;
            continue;
        }
        if ((a[i] + m - 1) / m == j)
        {
            ans = max(ans, i + 1);
        }
    }
    cout << ans << "\n";
    return 0;
}
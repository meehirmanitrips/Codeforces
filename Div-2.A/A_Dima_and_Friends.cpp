/* Here we need to find the number of ways dima can skip cleaning. We can observe
that the chance comes to dima only when the total sum modulo total people = 1 .
So all we have to do is count the times the numbers b/w 1 and 5 are not giving
modulo 1 when added to the given sum. */

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
    int n, i, j, x, sum = 0, ans = 0;
    cin >> n;
    fo(i, 0, n)
    {
        cin >> x;
        sum += x;
    }
    n++;
    fo(i, 1, 6)
    {
        if ((sum + i) % n != 1)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
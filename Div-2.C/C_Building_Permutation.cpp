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
    int n;
    cin >> n;
    vi vec(n, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec[i] = x;
    }
    sort(vec.begin(), vec.end());
    ll cnt = 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs(cnt - vec[i]);
        cnt++;
    }
    cout << ans << endl;
    return 0;
}
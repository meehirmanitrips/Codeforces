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
    ll n, m;
    cin >> n >> m;
    vector<bool> v(m + 1, true);
    v[0] = false;
    v[1] = false;
    for (int i = 2; i < v.size(); ++i)
    {
        if (v[i])
        {
            for (int j = i * i; j < v.size(); j += i)
            {
                v[j] = false;
            }
        }
    }
    bool flag = 0;
    for (int i = n + 1; i < v.size(); ++i)
    {
        if (v[i])
        {
            if (i != m)
            {
                break;
            }
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
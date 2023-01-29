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
    int x = 14;
    int a[x];
    a[0] = 4;
    a[1] = 7;
    a[2] = 44;
    a[3] = 47;
    a[4] = 74;
    a[5] = 77;
    a[6] = 444;
    a[7] = 447;
    a[8] = 474;
    a[9] = 477;
    a[10] = 744;
    a[11] = 747;
    a[12] = 774;
    a[13] = 777;
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < x; i++)
    {
        if (n % a[i] == 0)
        {
            flag = true;
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
/* Here the logic is that if we need k numbers that satisfy the condition
a(i) > a(i+1) then we can print k-1 numbers in reverse and then print the
rest in increasing way. */

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
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        for (int i = 1; i < n + 1; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i = n; i > n - k; i--)
        {
            cout << i << " ";
        }
        for (int i = 1; i < (n + 1) - k; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
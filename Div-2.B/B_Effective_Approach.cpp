/* Here the idea is that in linear search u can observe that to find an element
from the left side at i position it will take i+1 comaprisions and from right
side it will take n-(i+1)+1 comparisons.
So if we create an array which will store the index+1 of the elements of the given
array at index = array element. */

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
    int n, m, i, j, x;
    ll vasya = 0, petya = 0;
    cin >> n;
    int a[100005];
    fo(i, 0, n)
    {
        scanf("%d", &x);
        a[x] = i + 1;
    }
    cin >> m;
    fo(i, 0, m)
    {
        scanf("%d", &x);
        vasya += a[x];
        petya += n - a[x] + 1;
    }
    printf("%I64d %I64d\n", vasya, petya);
    return 0;
}
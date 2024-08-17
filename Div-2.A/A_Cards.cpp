#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int cnt_z = 0, cnt_o = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'z')
        {
            cnt_z++;
        }
        else if (s[i] == 'o')
        {
            cnt_o++;
        }
    }

    // If count of o and z are equal then the only possible values that can be are zero, else the difference b/w the count of o and z will give us how many ones
    // print the 1s
    for (int i = 0; i < (cnt_o - cnt_z); i++)
    {
        cout << "1 ";
    }
    // print the 0s
    for (int i = 0; i < cnt_z; i++)
    {
        cout << "0 ";
    }

    return 0;
}
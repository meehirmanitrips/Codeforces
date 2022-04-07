#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin>>a;
    for(int i = 0; i<a.length(); i++)
    {
        if(a[i] == '.')
        {
            b += '0';
        }
        else 
        {
            if(a[i+1] == '.')
            {
                b += '1';
                i++;
            }
            else
            {
                b += '2';
                i++;
            }
        }
    }
    cout<<b<<endl;
    return 0;
}
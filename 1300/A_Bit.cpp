#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int x = 0;
void solve()
{
    string s;
    cin>>s;
    for(int i = 0; i<s.length(); ++i)
    {
        if(s[i] == '+')
        {
            x++;
            return;   
        }
        else if(s[i] == '-')
        {
            x--;
            return;
        }
    }
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       solve();
   }
   cout<<x;
   return 0;
}
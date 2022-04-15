#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
   string s;
   cin>>s;
   if(s[0] >= 'a' && s[0] <= 'z')
   {
       transform(s.begin(), s.end()-s.length()+1, s.begin(), ::toupper);
       cout<<s;
   }
   else
   {
       cout<<s;
   }
   return 0;
}
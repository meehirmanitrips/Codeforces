#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
   string s;
   cin>>s;
   int lower = 0, upper = 0;
   for(int i = 0; i<s.length(); ++i)
   {
       if(s[i] >= 'a' && s[i] <= 'z')
       {
           lower++;
       }
       else
       {
           upper++;
       }
   }
   if(lower < upper)
   {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
   }
   else
   {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
   }
   cout<<s;
   return 0;
}
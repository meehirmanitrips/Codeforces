#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    y++;
    while(true)
    {
        int a = y/1000;
        int b = (y/100)%10;
        int c = (y/10)%10;
        int d = y%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<(a*1000)+(b*100)+(c*10)+d<<endl;
            break;
        }
        y++;
    }
    return 0;
}
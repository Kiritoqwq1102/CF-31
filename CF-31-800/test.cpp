#include<bits/stdc++.h>
using namespace std;


bool pan(int x)
{
    if(x<2)   return false;
    if(x==2)   return true;
    if(x%2==0) return false;


    for(int i =3;i<=x/i;++i)
    {
        if(x%i==0)
            return false;
    }

    return true;
}
int main()
{


    int x;cin>>x;

    cout << pan(x) << '\n';


    return 0;
}
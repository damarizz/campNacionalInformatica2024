#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,n,a;
    cin>>t>>n;
    int sum=0;
    int dias=0;
    while(t--)
    {
        cin>>a;
        sum=(86400-a)+sum;
        dias++;
        if(n<=sum)
        {
            break;
        }

    }
    cout<<dias<<endl;
    return 0;
}

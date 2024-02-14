/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i, n) for(int i=0;i<n;i++)
#define fora(a, b, c) for(int i=a;i<b;i+=c)
#define yesi cout<<"YES"<<'\n'
#define nosi cout<<"NO"<<'\n'

int main()
{
    fastio;
    int n, t, k1, k2, fights, c1, c2;
    queue<int> k1_cards, k2_cards;
    cin >> n >> k1;
    fori(i, k1)
    {
        cin >> t;
        k1_cards.push(t);
    }
    cin >> k2;
    fori(i, k2)
    {
        cin >> t;
        k2_cards.push(t);
    }

    fights = 0;
    while (fights < 100000 && !k1_cards.empty() && !k2_cards.empty())
    {
        c1 = k1_cards.front();
        k1_cards.pop();
        c2 = k2_cards.front();
        k2_cards.pop();

        if (c1 > c2)
        {
            k1_cards.push(c2);
            k1_cards.push(c1);
        }
        else
        {
            k2_cards.push(c1);
            k2_cards.push(c2);
        }

        fights++;
    }

    if (k2_cards.empty())
        cout << fights << " 1";
    else if (k1_cards.empty())
        cout << fights << " 2";
    else
        cout << -1;

    return 0;
}

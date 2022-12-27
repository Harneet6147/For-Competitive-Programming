#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fo(i, a, b) for (int i = a; i < b; i++)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void Print(vector<ll> v)
{
    for (auto i : v)
        cout << i << endl;
}

void solve()
{
    ll t;
    cin >> t;

    for (int k = 1; k <= t; k++)
    {
        cout << "Case #" << k << ": ";
        ll d, n, x;
        cin >> d >> n >> x;
        vll q(n), m(n), v(n);
        fo(i, 0, n)
        {
            cin >> q[i];
            cin >> m[i];
            cin >> v[i];
        }
        
    }
}

int main()
{
    solve();
    cout << endl;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fo(i, a, b) for (int i = a; i < b; i++)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
void solve()
{
    ll t;
    cin >> t;

    for (int k = 1; k <= t; k++)
    {
        cout << "Case #" << k << ": ";
        int n, m;
        cin >> n >> m;
        int x, s = 0;
        fo(i, 0, n)
        {
            cin >> x;
            s += x;
        }
        if (s < m)
        {
            cout << s << endl;
        }
        else
        {
            if (s == m)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << s % m << endl;
            }
        }
    }
}

int main()
{
    // solve();
    // cout << endl;

    vi v = {1, 3, 5};
    cout << "LOWER BOUND IS: " << (*(lower_bound(all(v), 2)));
}

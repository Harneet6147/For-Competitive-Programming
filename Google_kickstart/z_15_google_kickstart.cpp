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

    for (int i = 1; i <= t; i++)
    {
        ll n;
        cin >> n;
        vll a(n);
        vll ans;
        for (auto &r : a)
        {
            cin >> r;
        }
        vll v = a;
        sort(all(v));
        cout << "Case #" << i << ": ";
        for (auto &it : a)
        {
            auto x = upper_bound(all(v), 2 * it);
            if (x == v.begin())
            {
                ans.pb(-1);
            }
            else
            {
                x--;
                if (*x != it)
                {
                    ans.pb(*x);
                }
                else
                {
                    if (x == v.begin())
                    {
                        ans.pb(-1);
                    }
                    else
                    {
                        x--;
                        ans.pb(*x);
                    }
                }
            }
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }

        cout << endl;
        // string p;
        // cin >> p;
        // string q = "", x = p;
        // q += p[n - 1];
        // p += q;
        //
        // for (ll j = n - 2; j >= 0; j--)
        //{
        //    string h = p;
        //    reverse(all(p));
        //    if (h == p)
        //    {
        //        break;
        //    }
        //    q += x[j];
        //    p = h;
        //    p += x[j];
        //}
        // cout << q << endl;
    }
}

int main()
{
    solve();
    cout << endl;
}

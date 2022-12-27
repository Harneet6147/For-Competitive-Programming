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
        ll n, q;
        cin >> n >> q;
        vector<vector<int>> v(n);
        vector<int> vis(n, 0);
        vector<int> h(n, 0);
        int x, y;
        for (int i = 1; i < n; i++)
        {
            cin >> x >> y;
            x--, y--;
            v[x].pb(y);
            v[y].pb(x);
        }
        int ggg;
        fo(i, 0, q)
        {
            cin >> ggg;
        }
        queue<int> Q;
        Q.push(0);
        vis[0] = 1;
        h[0] = 0;
        while (!Q.empty())
        {
            int root = Q.front();
            Q.pop();
            for (auto it : v[root])
            {
                if (!vis[it])
                {
                    h[it] = h[root] + 1;
                    vis[it] = 1;
                    Q.push(it);
                }
            }
        }
        map<int, int> m;
        for (auto it : h)
        {
            m[it]++;
        }
        vector<int> ans;
        int p = 0;
        for (auto it : m)
        {
            p += it.second;
            ans.pb(p);
        }
        int anss = *(lower_bound(all(ans), q));
        cout << anss << endl;
    }
}

int main()
{
    solve();
    cout << endl;
}

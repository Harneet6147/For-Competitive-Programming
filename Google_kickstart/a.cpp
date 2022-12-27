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
        ll n;
        cin >> n;
        vector<pair<string, int>> a(n);
        vector<pair<int, int>> b(n);
        fo(i, 0, n)
        {
            cin >> a[i].first;
            cin >> b[i].first;
            cin >> a[i].second;
            b[i].second = a[i].second;
        }
        ll ans = 0;
        sort(all(a));
        sort(all(b));
        fo(i, 0, n)
        {
            if (a[i].second == b[i].second)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

int main()
{
    solve();
    cout << endl;
}

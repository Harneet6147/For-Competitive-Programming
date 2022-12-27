#include <bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using namespace std;
typedef long long ll;
#define pb push_back
#define fo(i, a, b) for (int i = a; i < b; i++)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
ll mod = 998244353;
int sieve[100005];

void sieveOfEratosthenes(ll n)
{
    for (ll i = 2; i <= n + 1; i++)
    {
        if (!sieve[i])
            for (ll j = 2 * i; j <= n + 1; j += i)
                sieve[j] = 1;
    }
}
ll getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}

bool compare(string &s1, string &s2)
{
    return s1.size() < s2.size();
}
int countTrailingZero(int x)
{

    static const int lookup[] = {32, 0, 1,
                                 26, 2, 23, 27, 0, 3, 16, 24, 30, 28, 11,
                                 0, 13, 4, 7, 17, 0, 25, 22, 31, 15, 29,
                                 10, 12, 6, 0, 21, 14, 9, 5, 20, 8, 19,
                                 18};
    return lookup[(-x & x) % 37];
}

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

// struct TreeNode
//{
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

bool isPowerOfTwo(ll x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x & (x - 1)));
}

void solve()
{
}

int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    //{
    //     solve();
    //     cout << endl;
    // }

    //ll n, k;
    //cin >> n >> k;
    //ordered_set<ll> s;
    //for (int i = 1; i <= n; i++)
    //{
    //    s.insert(i);
    //}
    //int x = 0;
    //while (s.size() > 0)
    //{
    //    x %= s.size();
    //    ll rem = (x + k) % s.size();
    //    x = rem;
    //    auto t = s.find_by_order(rem);
    //    cout << (*t) << " ";
    //    s.erase(t);
    //}
}

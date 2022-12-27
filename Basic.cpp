#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fo(i, a, b) for (int i = a; i < b; i++)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
ll mod = 998244353;
int sieve[100005];

template <class T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

template <class T>
using max_heap = priority_queue<T>;

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
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        long long sr = sqrt(x);

        // if product of square root
        // is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int isKthBitSet(int n, int k)
{
    if (n & (1 << (k - 1)))
        return 1;

    return 0;
}
ll findTrailingZeros(ll n)
{
    ll k = 1;
    ll c = 0;
    fo(i, 0, 9)
    {
        if (n % (k * 10) == 0)
        {
            k = k * 10;
        }
        else
        {
            c = i;
            break;
        }
    }
    return c;
}
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

unsigned int nextPowerOf2(unsigned int n)
{
    unsigned count = 0;

    // First n in the below condition
    // is for the case where n is 0
    if (n && !(n & (n - 1)))
        return n;

    while (n != 0)
    {
        n >>= 1;
        count += 1;
    }

    return 1 << count;
}
//---------------------------------------------------------------
//---------------------------------------------------------------
//---------------------------------------------------------------
//---------------------------------------------------------------
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> hp(n);
    fo(i, 0, n)
    {
        cin >> hp[i].second;
    }

    fo(i, 0, n)
    {
        cin >> hp[i].first;
    }
    ll x = k;

    sort(all(hp));

    ll i = 0;
    ll f = 0;
    while (i < n && hp[i].second > 0)
    {
        if (k <= 0)
        {
            f = 1;
            break;
        }
        hp[i].second -= x;
        if (hp[i].second <= 0)
        {
            hp[i].second = 0;
            i++;
            continue;
        }
        if (hp[i].second > 0)
        {
            k -= hp[i].first;
        }
        else
        {
            i++;
        }

        x += k;
    }

    fo(i, 0, n)
    {
        if (hp[i].second > 0)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    // IMPORTANT:->>>  __lg(x):-> return the index of highest set bit. Example => __lg(16) = 4

    // A,B,C:-> rock, paper, scissor
    // X,Y,Z:-> rock, paper, scissor
}
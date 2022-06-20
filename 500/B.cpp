// rohita



#include<bits/stdc++.h>

// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;

// using namespace chrono;
// using namespace __gnu_pbds;


#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int                long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           x.rbegin(), x.rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define repi(i,a,b)       for(int i=b-1;i>=a;i--)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define sz5               100005
#define sz6               1000005
#define V(a)              vector<a>
#define MP               make_pair
#define MT               make_tuple
#define G(a,b)           get<a>(b)
#define PI               3.14159265358979323846
#define nline            "\n"
#define yes              "YES"
#define no               "NO"
#define sortd(n)         sort(all(n),greater<>())
#define sorta(n)         sort(all(n))
#define lower(s)        transform(s.begin(),s.end(),s.begin(), ::tolower)
#define upper(s)        transform(s.begin(),s.end(),s.begin(), ::toupper)



template<typename T1, typename T2>istream& operator>>(istream& in, pair<T1, T2> &a) {in >> a.fr >> a.sc; return in;}
template<typename T1, typename T2>ostream& operator<<(ostream& out, pair<T1, T2> a) {out << a.fr << " " << a.sc; return out;}
template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
/*--------------------------------------------------------------------------------------------------------------------------*/
const int N = 305;

vector<vector<int>> adj(N);
bool vis[N];

bool dfs(int u , int v)
{
	vis[u] = true;

	for (auto e : adj[u])
	{
		if (!vis[e])
		{
			if (e == v || dfs(e , v))
			{
				return true;
			}

		}
	}
	return false;
}

void solve()
{

	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i < n + 1; i++)
	{
		cin >> a[i];
	}
	char mat[n + 1][n + 1];
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			cin >> mat[i][j];
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			if (mat[i][j] == '1')
			{
				adj[i].pb(j);
			}
		}
	}
	bool done[n + 1];
	for (int i = 1; i < n + 1; i++)
	{
		done[i] = false;
	}

	int Curval = 1;
	// if (dfs(6 , 2))
	// {
	// 	cout << yes << nline;
	// }
	while (Curval <= n)
	{
		bool b = false;
		for (int i = 1; i < n + 1; i++)
		{
			if (a[i] == Curval)
			{

				for (int j = 1; j < i; j++)
				{
					// cout << Curval << " es" << nline;
					if (!done[j])
					{
						for (int k = 1; k < n + 1; k++)
						{
							vis[k] = false;
						}
						if (dfs(i , j))
						{
							// cout << i << " " << j << " vdesfrv" << nline;
							done[j] = true;
							swap(a[i] , a[j]);
							b = true;
							break;

						}
					}
				}
				if (b)
				{
					break;
				}
			}
		}
		if (!b)
		{
			for (int i = 1; i < n + 1; i++)
			{
				if (a[i] == Curval)
				{
					done[i] = true;
					break;
				}
			}

		}
		Curval++;
	}
	for (int i = 1; i < n + 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << nline;



}



signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("out3.txt", "w", stdout);
	freopen("rohita.txt", "w", stderr);
#endif
	FAST


	int t;
	t = 1;
	// cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;

}
// rohita



#include<bits/stdc++.h>

// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
#include <type_traits>


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
#define rohit            "ROCK IT!!"
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

const int INF = 1e9;
const int N = 1e5 + 5;




signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("out5.txt", "w", stdout);
	freopen("rohita.txt", "w", stderr);
#endif
	FAST

	string s;
	cin >> s;
	if (s == "0" || s == "X" || s == "_")
	{
		cout << 1 << nline;
		return 0;
	}

	if (s.size() == 1 || s[0] == '0')
	{
		cout << 0 << nline;
		return 0;
	}


	int ans = 1;

	int n = s.size();

	if (s[n - 1] == '_' && s[n - 2] == '_')
	{
		if (s.size() == 2)
		{
			cout << 3 << nline;
		}
		else
		{
			int ans = 4;
			int x = 1;

			for (int i = 0; i < n - 2; i++)
			{
				if (i == 0 && s[i] == '_')
				{
					ans = ans * 9;
				}
				else if (s[i] == '_')
				{
					ans = ans * 10;
				}
				else if (s[i] == 'X')
				{
					x = 10;
				}
			}
			if (s[0] == 'X')
			{
				x = 9;
			}
			ans = ans * x;
			cout << ans << nline;
		}
	}
	else if (s[n - 1] == '_' && s[n - 2] != 'X')
	{
		if (s.size() == 2)
		{
			if (s[n - 2] == '2' || s[n - 2] == '5' || s[n - 2] == '7')
			{
				cout << 1 << nline;
			}
			else
			{
				cout << 0 << nline;
			}
		}
		else
		{
			if (s[n - 2] == '2' || s[n - 2] == '5' || s[n - 2] == '7' || s[n - 2] == '0')
			{
				int ans = 1;
				int x = 1;

				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}
					else if (s[i] == 'X')
					{
						x = 10;
					}
				}
				if (s[0] == 'X')
				{
					x = 9;
				}
				ans = ans * x;
				cout << ans << nline;

			}
			else
			{
				cout << 0 << nline;
			}
		}
	}
	else if (s[n - 2] == '_' && s[n - 1] != 'X')
	{
		if (s.size() == 2)
		{
			if (s[n - 1] == '5' || s[n - 1] == '0')
			{
				if (s[n - 1] == '5')
				{
					cout << 2 << nline;
				}
				else
				{
					cout << 1 << nline;
				}
			}
			else
			{
				cout << 0 << nline;
			}
		}
		else
		{
			if (s[n - 1] == '5' || s[n - 1] == '0')
			{
				int ans;
				if (s[n - 1] == '5')
				{
					ans = 2;
				}
				else
				{
					ans = 1;
				}
				int x = 1;

				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}
					else if (s[i] == 'X')
					{
						x = 10;
					}
				}
				if (s[0] == 'X')
				{
					x = 9;
				}
				ans = ans * x;
				cout << ans << nline;

			}
			else
			{
				cout << 0 << nline;
			}
		}
	}
	else if (s[n - 1] == '_' && s[n - 2] == 'X')
	{
		if (s.size() == 2)
		{
			cout << 3 << nline;
		}
		else
		{
			if (s[0] == 'X')
			{
				int ans = 3;
				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}

				}
				cout << ans << nline;

			}
			else
			{
				int ans = 4;
				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}

				}
				cout << ans << nline;

			}
		}
	}
	else if (s[n - 1] == 'X' && s[n - 2] == '_')
	{
		if (s.size() == 2)
		{
			cout << 3 << nline;
		}
		else
		{
			if (s[0] == 'X')
			{
				int ans = 2;
				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}

				}
				cout << ans << nline;

			}
			else
			{
				int ans = 4;
				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}

				}
				cout << ans << nline;

			}
		}
	}
	else if (s[n - 1] == 'X' && s[n - 2] == 'X')
	{
		if (s.size() == 2)
		{
			cout << 0 << nline;
		}
		else
		{
			ans = 1;


			for (int i = 0; i < n - 2; i++)
			{
				if (i == 0 && s[i] == '_')
				{
					ans = ans * 9;
				}
				else if (s[i] == '_')
				{
					ans = ans * 10;
				}
			}
			if (s[0] == 'X')
			{
				cout << 0 << nline;
			}
			else
			{
				cout << ans << nline;
			}
		}
	}
	else if (s[n - 1] == 'X' && s[n - 2] != '_')
	{
		if (s.size() == 2)
		{
			if (s[n - 2] == '2' || s[n - 2] == '7' || s[n - 2] == '5')
			{
				cout << 1 << nline;
			}
			else
			{
				cout << 0 << nline;
			}
		}
		else
		{
			if (s[n - 2] == '2' || s[n - 2] == '7' || (s[n - 2] == '0' && s[0] != 'X') ||
			    (s[n - 2] == '5' && s[0] != 'X'))
			{
				int ans = 1;

				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}
				}

				cout << ans << nline;

			}
			else
			{
				cout << 0 << nline;
			}
		}
	}
	else if (s[n - 2] == 'X' && s[n - 1] != '_')
	{
		if (s.size() == 2)
		{
			if (s[1] == '5')
			{
				cout << 2 << nline;
			}
			else if (s[1] == '0')
			{
				cout << 1 << nline;
			}
			else
			{
				cout << 0 << nline;
			}
		}
		else
		{
			int ans;
			if (s[n - 1] == '5')
			{
				ans = 2;
			}
			else if (s[n - 1] == '0' && s[0] == 'X')
			{
				ans = 1;
			}
			else if (s[n - 1] == '0')
			{
				ans = 2;
			}
			for (int i = 0; i < n - 2; i++)
			{
				if (i == 0 && s[i] == '_')
				{
					ans = ans * 9;
				}
				else if (s[i] == '_')
				{
					ans = ans * 10;
				}

			}

			cout << ans << nline;
		}
	}
	else
	{
		if (s.size() == 2)
		{
			if (s == "25" || s == "50" || s == "75")
			{
				cout << 1 << nline;
			}
			else
			{
				cout << 0 << nline;
			}
		}
		else
		{

			if ((s[n - 2] == '2' && s[n - 1] == '5') ||
			    (s[n - 2] == '5' && s[n - 1] == '0') ||
			    (s[n - 2] == '7' && s[n - 1] == '5') ||
			    (s[n - 2] == '0' && s[n - 1] == '0'))
			{
				int ans = 1;
				int x =  1;

				for (int i = 0; i < n - 2; i++)
				{
					if (i == 0 && s[i] == '_')
					{
						ans = ans * 9;
					}
					else if (s[i] == '_')
					{
						ans = ans * 10;
					}
					else if (s[i] == 'X')
					{
						x = 10;
					}

				}
				if (s[0] == 'X')
				{
					x = 9;
				}
				ans = ans * x;
				cout << ans << nline;

			}
			else
			{
				cout << 0 << nline;
			}
		}
	}





}
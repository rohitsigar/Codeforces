#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int               long long
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
#define repi(i,a,b)       for(ll i=b-1;i>=a;i--)
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
const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;
const int N = 5e5 + 5;
template<typename T1, typename T2>istream& operator>>(istream& in, pair<T1, T2> &a) {in >> a.fr >> a.sc; return in;}
template<typename T1, typename T2>ostream& operator<<(ostream& out, pair<T1, T2> a) {out << a.fr << " " << a.sc; return out;}
template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
typedef pair<int, int> pairs;
void solve(void)
{
	int n, m;
	cin >> n >> m;
	vector<string> tree;
	rep(i, 0, n)
	{
		string s;
		cin >> s;
		tree.pb(s);
	}
	int weidth[n][m];
	int ans = 0;
	rep(i, 0, n)
	{
		rep(j, 0, m)
		{
			if (tree[i][j] == '*')
			{
				int a = j - 1;
				int b = j + 1;
				ans++;
				while (a >= 0 and tree[i][a] == '*')
				{
					a--;

				}
				while (b < m and tree[i][b] == '*')
				{
					b++;
				}
				weidth[i][j]  = min(j - a , b - j);
			}
			else
			{
				weidth[i][j] = 0;
			}

		}
	}
	rep(i, 0, n)
	{
		rep(j, 0, m)
		{
			if (weidth[i][j] > 0)
			{
				int p = 2;
				int down = i + 1;
				while (down < n and weidth[down][j] >= p)
				{

					p++;
					down++;
				}

				ans = ans  + down - i - 1;
			}
		}
	}
	cout << ans << endl;




}
signed main()
{
#ifndef ONLINE_JUDGE
	//FOR GETTING INPUT FROM INPUT.TEXT
	freopen("input", "r", stdin);
	//for getting output to output.txt
	freopen("output", "w", stdout);
#endif
	FAST
	int t;
	cin >> t;
	// t = 1;

	while (t--)
	{
		solve();
	}

	return 0;
}
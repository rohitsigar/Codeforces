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
const long long INF = (1LL << 35) - 1;
const int32_t M = 1e9  + 7 ;
const int32_t MM = 998244353;
const int N1 = 2e5 + 1;
const int N2  = 1e6 + 1;
void google(int t) {cout << "Case #" << t << ": ";}
template<typename T1, typename T2>istream& operator>>(istream& in, pair<T1, T2> &a) {in >> a.fr >> a.sc; return in;}
template<typename T1, typename T2>ostream& operator<<(ostream& out, pair<T1, T2> a) {out << a.fr << " " << a.sc; return out;}
template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
int dp[N1][10];

void precompute(void)
{
	for (int i = 0; i < 10; i++)
		dp[0][i] = 1;
	for (int i = 1; i < N1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				dp[i][j] = (dp[i - 1][0] + dp[i - 1][1]) % M;
			}
			else
			{
				dp[i][j] = (dp[i - 1][j + 1]) % M;
			}
		}
	}
}

void solve()
{

	string n;
	int m;
	cin >> n >> m;
	int ans = 0;

	for (int i = 0; i < n.size(); i++)
	{
		ans = (ans + dp[m][n[i] - '0']) % M;
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
	cin >> t ;
	precompute();
	while (t--)
	{
		solve();
	}

	return 0;
}
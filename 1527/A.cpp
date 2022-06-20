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
const int N = 1e5 + 5;
template<typename T1, typename T2>istream& operator>>(istream& in, pair<T1, T2> &a) {in >> a.fr >> a.sc; return in;}
template<typename T1, typename T2>ostream& operator<<(ostream& out, pair<T1, T2> a) {out << a.fr << " " << a.sc; return out;}
template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

long long fastExpo(int a, int n)
{
	if (n == 1)return a;
	else if (n == 2)return 1LL * a * a;
	else if (n & 1)return 1LL * a * fastExpo(fastExpo(a, n >> 1), 2);
	else return fastExpo(fastExpo(a, n >> 1), 2);
}

void solve()
{


	int n;
	cin >> n;
	int temp = 1;
	int val = 2 ;
	if (n == 1)
	{
		cout << 0 << endl;
		return;
	}
	while (n > val)
	{
		val = val * 2;
		temp++;
	}
	if (n == val)
	{
		cout << n - 1 << endl;
	}
	else
	{
		cout << fastExpo(2, temp - 1) - 1 << endl;
	}

}

signed main()
{
#ifndef ONLINE_JUDGE
	//FOR GETTING INPUT FROM INPUT.TEXT
	freopen("input", "r", stdin);
	//for getting output to output.txt
	freopen("output1", "w", stdout);
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
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

void solve(void)
{
	int n, m, x;
	cin >> n >> m >> x;
	vector<pair<int, int>> val;
	for (int i = 0; i < n; i++)
	{
		int temp ;
		cin >> temp;
		val.pb({temp, i});
	}
	if (m == 1)
	{
		cout << "YES" << endl;
		rep(i, 0, n)
		{
			cout << 1 << " ";
		}
		cout << endl;
		return;
	}
	sort(val.begin(), val.end());
	set<pair<int, int>> index;
	vector<vector<int>> pos(n);
	rep(i, 0, m)
	{
		index.insert({0, i});
	}
	map<int, int> ans;
	for (int i = n - 1; i >= 0; i--)
	{
		// cout << val[i].first << " " << val[i].second << endl;
		auto itr = index.begin();
		pair<int, int> temp = *itr;
		// cout << temp.first << " " << temp.second << endl;
		index.erase(itr);
		// cout << index.size() << endl;
		temp.first = temp.first + val[i].first;
		// cout << temp.first << endl;
		pos[temp.second].pb(val[i].second);
		index.insert(temp);
		ans[val[i].second] = temp.second;
	}

	auto itr = index.begin();
	int a = itr->first;
	int b;

	for (auto e : index)
	{
		b = e.first;
	}
	if (a - b <= x)
	{
		cout << "YES" << endl;
		for (auto e : ans)
		{
			cout << e.second + 1 << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "NO" << endl;
	}





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
	while (t--)
	{
		solve();
	}

	return 0;
}
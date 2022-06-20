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

	string s;
	cin >> s;
	int n = s.size();
	vector<string> ans;

	int previ = 0;
	for (int i = 0; i < n - 2; i++)
	{
		int j = i;
		set<char>mp;
		int ct = 0;
		while (ct != 3)
		{
			mp.insert(s[j]);
			j++;
			ct++;
		}
		if (mp.size() != 1 && mp.find('a') == mp.end() && mp.find('e') == mp.end() && mp.find('i') == mp.end() && mp.find('o') == mp.end() && mp.find('u') == mp.end())
		{
			ans.push_back(s.substr(previ, j - previ - 1));
			previ = j - 1;
			i = j - 2;
		}
	}
	ans.push_back(s.substr(previ, n - previ));
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
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
	// cin >> t;
	t = 1;
	while (t--)
	{
		solve();
	}

	return 0;
}
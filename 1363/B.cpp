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

void solve()
{

	string s;
	cin >> s;
	bool b = true;
	vector<int> count;
	int temp = 1;
	if (s[0] == '1')
	{
		b = true;
	}
	else
	{
		b = false;
	}


	rep(i, 1, s.size())
	{
		if (s[i] == '1' and b)
		{
			temp++;
		}
		else if (s[i] == '1' and !b)
		{
			count.pb(temp);
			temp = 1;
			b = true;
		}
		else if (s[i] == '0' and b)
		{
			count.pb(temp);
			temp = 1;
			b = false;
		}
		else
		{
			temp++;
		}
	}
	count.pb(temp);
	if (count.size() < 3)
	{
		cout << "0" << endl;
	}
	else
	{
		int a1 = 0;
		int b1 = 0;
		int n = count.size();
		rep(i, 0, count.size())
		{
			if (i % 2 == 0)
			{
				a1 = a1 + count[i];
			}
			else
			{
				b1 = b1 + count[i];
			}
		}
		int ans = min(a1, b1);
		int prifex1[n];
		int prifex2[n];

		prifex2[0] = count[0];
		prifex1[0] = 0;



		rep(i, 1, n)
		{
			if (i % 2 == 0)
			{
				prifex2[i] = prifex2[i - 1] + count[i];
				prifex1[i] = prifex1[i - 1];
			}
			else
			{
				prifex1[i] = prifex1[i - 1] + count[i];
				prifex2[i] = prifex2[i - 1];
			}

		}

		rep(i, 0, n - 1)
		{
			if (i - 1 >= 0)
			{
				if (i % 2 != 0)
				{
					int temp = prifex2[i - 1] + prifex1[n - 1] - prifex1[i + 1];
					ans = min(ans , temp);
				}
				else
				{
					int temp = prifex1[i - 1] + prifex2[n - 1] - prifex2[i + 1];
					ans = min(ans , temp);
				}
			}
			else
			{
				if (i % 2 != 0)
				{
					int temp =  prifex1[n - 1] - prifex1[i + 1];
					ans = min(ans , temp);
				}
				else
				{
					int temp = prifex2[n - 1] - prifex2[i + 1];
					ans = min(ans , temp);
				}
			}
		}
		cout << ans << endl;
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
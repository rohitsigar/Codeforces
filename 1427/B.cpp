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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	int count = 0;
	rep(i, 0, n)
	{
		if (s[i] == 'W')
		{
			count++;
		}
	}
	int loss = n - count;


	if (loss  >  k)
	{
		vector<int> val1;
		vector<int> val2;
		int b1 = false;

		rep(i, 0, n)
		{
			if (s[i] == 'W' and !b1)
			{
				b1 = true;
				val1.pb(i);
			}
			else if (s[i] == 'W')
			{

			}
			else if (s[i] == 'L' and b1)
			{
				val2.pb(i - 1);
				b1 = false;
			}

		}
		int i = 1;
		int j = 0;
		// rep(i, 0, val1.size())
		// {
		// 	cout << val1[i] << " ";
		// }
		// cout << endl;
		// rep(i, 0, val2.size())
		// {
		// 	cout << val2[i] << " ";
		// }
		// cout << endl;
		vector<pair<int, pair<int, int>>> final;
		while (i < val1.size() and  j < val2.size())
		{

			int temp = val1[i] - val2[j] - 1;
			final.pb({temp , {val2[j] + 1 , val1[i] - 1}});
			i++;
			j++;
		}

		sort(final.begin() , final.end());
		// rep(i, 0, final.size())
		// {
		// 	cout << final[i].first << " " << final[i].second.first << " " << final[i].second.second << endl;
		// }
		rep(i, 0, final.size())
		{
			if (k > final[i].first)
			{
				k = k - final[i].first;
				rep(l, final[i].second.first , final[i].second.second + 1)
				{
					s[l] = 'W';
				}
			}
			else
			{
				int l = final[i].second.first ;
				while (k > 0)
				{
					s[l] = 'W';
					l++;
					k--;
				}

				break;
			}
		}
		if (k == 0)
		{

			int ans = 0;
			bool b2 = false;
			rep(i, 0, n)
			{
				if (s[i] == 'W' and !b2)
				{
					ans = ans + 1;
					b2 = true;
				}
				else if (s[i] == 'W')
				{
					ans = ans + 2;
				}
				else
				{
					b2 = false;
				}
			}
			cout << ans << endl;
			return;
		}
		if (count == 0)
		{
			cout << 1 + 2 * (k - 1) << endl;
			return;
		}
		if (val1.size() > 0 and val2.size() == 0)
		{
			cout << 2 * (count + k - 1) + 1 << endl;
			return;
		}
		int a1 = val1[0] - 1;
		int a2 = max(val1[val1.size() - 1] + 1, val2[val2.size() - 1] + 1);



		while (k > 0 and a1 >= 0)
		{

			s[a1] = 'W';
			a1--;
			k--;
		}
		while (k > 0 and a2 < n)
		{
			s[a2] = 'W';
			a2++;
			k--;
		}

		//now calculate
		int ans = 0;
		bool b2 = false;
		rep(i, 0, n)
		{
			if (s[i] == 'W' and !b2)
			{
				ans = ans + 1;
				b2 = true;
			}
			else if (s[i] == 'W')
			{
				ans = ans + 2;
			}
			else
			{
				b2 = false;
			}
		}

		cout << ans << endl;

	}
	else
	{
		cout << 2 * (n - 1) + 1 << endl;
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
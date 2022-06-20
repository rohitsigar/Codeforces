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


	int n, m;
	cin >> n >> m;

	int arr[n];
	rep(i, 0, n)
	{
		cin >> arr[i];
	}
	vector<pair<int, pair<int, int>>> eve;
	vector<pair<int, pair<int, int>>> odd;
	map<char, int> map1;
	map1['L'] = 0;
	map1['R'] = 1;
	rep(i, 0, n)
	{
		char temp;
		cin >> temp;
		if (arr[i] % 2 == 0)
		{
			if (temp == 'L')
			{
				eve.pb({arr[i] , {i + 1 , 0}});

			}
			else
			{
				eve.pb({arr[i] , {i + 1 , 1}});


			}


		}
		else
		{
			if (temp == 'L')
			{
				odd.pb({arr[i] , { i + 1 , 0}});

			}
			else
			{
				odd.pb({arr[i] , { i + 1 , 1}});

			}


		}
	}
	sort(eve.begin() , eve.end());
	sort(odd.begin() , odd.end());
	stack<pair<int, pair<int, int>>> eve1;
	stack<pair<int, pair<int, int>>> odd1;
	int ans[n + 1];
	mem1(ans);
	rep(i, 0, eve.size())
	{
		pair<int, pair<int, int>> temp1;
		temp1 = eve[i];
		if (eve1.size() == 0)
		{
			if (temp1.second.second == 0)
			{
				temp1.first = -temp1.first;
				eve1.push(temp1);

			}
			else
			{
				eve1.push(temp1);
			}

		}
		else
		{
			if (temp1.second.second == 1)
			{
				eve1.push(temp1);

			}
			else
			{
				pair<int, pair<int, int>> temp2;
				temp2 = eve1.top();
				eve1.pop();
				int time  = (temp1.first - temp2.first) / 2;
				ans[temp1.second.first] = time;
				ans[temp2.second.first] = time;

			}

		}

	}
	while (eve1.size() > 1)
	{
		pair<int, pair<int, int>> a1 = eve1.top();
		eve1.pop();
		pair<int, pair<int, int>> a2 = eve1.top();
		eve1.pop();
		int temp = m - a1.first;
		int time = temp + (m - a2.first - temp) / 2;
		ans[a2.second.first]  = time;
		ans[a1.second.first] = time;

	}
	rep(i, 0, odd.size())
	{
		pair<int, pair<int, int>> temp1;
		temp1 = odd[i];
		if (odd1.size() == 0)
		{
			if (temp1.second.second == 0)
			{
				temp1.first = -temp1.first;
				odd1.push(temp1);

			}
			else
			{
				odd1.push(temp1);
			}

		}
		else
		{
			if (temp1.second.second == 1)
			{
				odd1.push(temp1);

			}
			else
			{
				pair<int, pair<int, int>> temp2;
				temp2 = odd1.top();
				odd1.pop();
				int time  = (temp1.first - temp2.first) / 2;
				ans[temp1.second.first] = time;
				ans[temp2.second.first] = time;

			}

		}

	}
	while (odd1.size() > 1)
	{
		pair<int, pair<int, int>> a1 = odd1.top();
		odd1.pop();
		pair<int, pair<int, int>> a2 = odd1.top();
		odd1.pop();
		int temp = m - a1.first;
		int time = temp + (m - a2.first - temp) / 2;
		ans[a2.second.first]  = time;
		ans[a1.second.first] = time;

	}
	rep(i, 1, n + 1)
	{
		cout << ans[i] << " ";
	}
	cout << endl;



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
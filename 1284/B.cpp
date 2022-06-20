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

int binary1(vector<int> a , int l , int r, int val)
{
	int mid = l + (r - l) / 2;

	// if (l == r)
	// {
	// 	return 0;
	// }

	if (a[mid] >= val)
	{
		if (mid  > 0 and a[mid - 1]  < val)
		{
			return mid;
		}
		else if (mid > 0)
		{
			return binary1(a ,  l , mid - 1 , val);
		}
		else
		{
			return 0;
		}

	}
	else
	{
		if (mid + 1 < a.size() and a[mid + 1]  > val)
		{
			return mid + 1;
		}
		else if (mid + 1 < a.size())
		{
			return binary1(a, mid + 1 , r , val);
		}
		else
		{
			return mid + 1;
		}


	}
}
void solve()
{

	int n;
	cin >> n;
	vector<pair<int, pair<int, bool>>> val;

	rep(i, 0, n)
	{
		int temp;
		cin >> temp;
		int val1;
		cin >> val1;
		int min1 = val1;
		int max1 = val1;
		bool b  = false;

		rep(j, 1, temp)
		{

			cin >> val1;
			if (min1 < val1)
			{
				b = true;
			}

			min1 = min(min1 , val1);
			max1 = max(max1 , val1);

		}
		val.pb({max1 , {min1 , b}});
	}

	vector<int> temp;
	vector<int> temp2;
	int count = 0;
	rep(i, 0, n)
	{
		if (!val[i].second.second)
		{

			temp.pb(val[i].second.first);
			temp2.pb(val[i].first);

		}
		else
		{
			count++;
		}
	}


	sort(temp.begin() , temp.end());


	int ans = count * (2 * (n - count) + 1) + count * (count - 1);




	// cout << temp.size() << endl;

	sort(temp2.begin() , temp2.end());
	// cout << temp.size() << " " << temp2.size() << endl;

	int i = temp2.size() - (int)1;
	int j = temp.size() - (int)1;

	// cout << temp.size() << endl;

	// cout << i << " " << j << endl;
	while (i >= 0 and j >= 0)
	{
		if (temp2[i] > temp[j])
		{
			ans = ans + j + 1;
			i--;
		}
		else
		{
			j--;
		}
	}
	cout << ans << endl;




	// rep(i, 0, temp2.size())
	// {


	// 	ans = ans + binary1(temp , 0 , temp.size() - 1 , temp2[i]);



	// }
	// cout << ans << endl;



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
	// cin >> t;
	t = 1;



	while (t--)
	{
		solve();
	}

	return 0;
}
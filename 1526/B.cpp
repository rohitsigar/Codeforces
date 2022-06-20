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


int gcd(int a, int b, int& x, int& y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int d = gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
	g = gcd(abs(a), abs(b), x0, y0);
	if (c % g) {
		return false;
	}

	x0 *= c / g;
	y0 *= c / g;
	if (a < 0) x0 = -x0;
	if (b < 0) y0 = -y0;
	return true;
}
void solve(void)
{
	int n;
	cin >> n;

	int x, y, g;
	if (find_any_solution(11, 111, n , x, y, g))
	{


		if (x > 0 and y < 0)
		{
			int a1 = 11 / g;
			int b1 = 111 / g;
			int tempa = -y;
			int count1 = tempa / a1;
			if (tempa % a1 != 0)
			{
				count1++;
			}
			int count2 = x / b1;

			if (x % b1 != 0)
			{
				count2++;
			}
			if (count1 > count2)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}


		}
		else if (x < 0 and y >0)
		{
			int a1 = 11 / g;
			int b1 = 111 / g;
			int tempa = -x;
			int count1 = tempa / b1;
			if (tempa % b1 != 0)
			{
				count1++;
			}
			int count2 = y / a1 + 1;
			if (count1  <  count2)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}


		}
		else if ( x >= 0 and y >= 0)
		{
			cout << "YES" << endl;

		}
		else
		{
			cout << "NO" << endl;

		}
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
	freopen("output1", "w", stdout);
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
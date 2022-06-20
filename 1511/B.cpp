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
int ac[] = {2, 16, 128, 1024, 16384, 131072, 1048576, 16777216, 134217728};
// int aa[] = {3, 27, 243, 2187, 19683, 177147, 1594323, 14348907, 129140163};
// int ab[] = {5 , 25 , 125, 3125, 15625, 390625, 1953125, 48828125, 244140625 };
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
void solve(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	// if (a > c)
	// {
	// 	cout << aa[c - 1]*aa[a - c - 1] << " ";
	// }
	// else
	// {
	// 	cout << aa[c - 1] << " ";
	// }
	// if (b > c)
	// {
	// 	cout << aa[c - 1]*ab[b - c - 1] << endl;
	// }
	// else
	// {
	// 	cout << aa[c - 1] << endl;
	// }
	int tempc = ac[c - 1];
	int tempa = tempc;
	int tempb = tempc;
	int lena = c;
	int lenb = c;
	while (lena < a)
	{
		tempa = tempa * 3;
		int temp1 = tempa;
		int len1 = 0;
		while (temp1 > 0)
		{
			temp1 = temp1 / 10;
			len1++;
		}
		lena = len1;
	}
	while (lenb < b)
	{
		tempb = tempb * 5;
		int temp1 = tempb;
		int len1 = 0;
		while (temp1 > 0)
		{
			temp1 = temp1 / 10;
			len1++;
		}
		lenb = len1;
	}
	cout << tempa << " " << tempb << " " << endl;


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
    // rohita

    #include<bits/stdc++.h>
#include<algorithm>


    // #include<ext/pb_ds/assoc_container.hpp>
    // #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
  //  #include <type_traits>


  // using namespace chrono;
  // using namespace __gnu_pbds;


    #define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #define int                int64_t   
    #define pb                push_back
    #define ppb               pop_back
    #define pf                push_front
    #define ppf               pop_front
    // #define all(x)            (x).begin(),(x).end()
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
    #define PI               3.14159265358979323846
    #define nline            "\n"
    #define yes              "YES"
    #define rohit            "ROCK IT!!"
    #define no               "NO"
    #define sortd(n)         sort(all(n),greater<>())
    #define sorta(n)         sort(all(n))
    #define lower(s)        transform(s.begin(),s.end(),s.begin(), ::tolower)
    #define upper(s)        transform(s.begin(),s.end(),s.begin(), ::toupper)



    template<typename T1, typename T2>istream& operator>>(istream& in, pair<T1, T2> &a) {in >> a.fr >> a.sc; return in;}
    template<typename T1, typename T2>ostream& operator<<(ostream& out, pair<T1, T2> a) {out << a.fr << " " << a.sc; return out;}
    template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
    template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

// typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
    // typedef tree<pair<int,int>,null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

    #ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
    #else
    #define debug(x)
    #endif

    // void _print(ll t) {cerr << t;}
    // void _print(int t) {cerr << t;}
    // void _print(string t) {cerr << t;}
    // void _print(char t) {cerr << t;}
    // void _print(lld t) {cerr << t;}
    // void _print(double t) {cerr << t;}
    // void _print(ull t) {cerr << t;}

    template <class T, class V> void _print(pair <T, V> p);
    template <class T> void _print(vector <T> v);
    template <class T> void _print(set <T> v);
    template <class T, class V> void _print(map <T, V> v);
    template <class T> void _print(multiset <T> v);
    template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
    template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


    /*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
    void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
    ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
    ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
    bool revsort(ll a, ll b) {return a > b;}
    void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
    ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
    void google(int t) {cout << "Case #" << t << ": ";}
    vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
    ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
    ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
    ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
    ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
    ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
    /*--------------------------------------------------------------------------------------------------------------------------*/
    


int getSum(int BITree[], int index)
{
    int sum = 0; // Initialize result
 
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
 
    // Traverse ancestors of BITree[index]
    while (index>0)
    {
        // Add current element of BITree to sum
        sum += BITree[index];
 
        // Move index to parent node in getSum View
        index -= index & (-index);
    }
    return sum;
}
 
// Updates a node in Binary Index Tree (BITree) at given index
// in BITree. The given value 'val' is added to BITree[i] and
// all of its ancestors in tree.
void updateBIT(int BITree[], int n, int index, int val)
{
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
 
    // Traverse all ancestors and add 'val'
    while (index <= n)
    {
    // Add 'val' to current node of BI Tree
    BITree[index] += val;
 
    // Update index to that of parent in update View
    index += index & (-index);
    }
}
 
// Constructs and returns a Binary Indexed Tree for given
// array of size n.
int *constructBITree(int arr[], int n)
{
    // Create and initialize BITree[] as 0
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;
 
    // Store the actual values in BITree[] using update()
    for (int i=0; i<n; i++)
        updateBIT(BITree, n, i, arr[i]);
 
    // Uncomment below lines to see contents of BITree[]
    //for (int i=1; i<=n; i++)
    //     cout << BITree[i] << " ";
 
    return BITree;
}
 

    void solve()
    {

         

        



        int n , q;
        cin >>n>>q;

        int arrx[n+2];
        int arry[n+2];
        for(int i=0;i<n+2;i++)
        {
            arrx[i] = 0;
            arry[i] = 0;
        }

         int *BITreex = constructBITree(arrx, n+2);
          int *BITreey = constructBITree(arry, n+2);

      
        for(int i=0;i<q;i++)
        {
            int type;
            cin>>type;
            if(type==1)
            {
                int x , y;
                cin >>x>>y;

                arrx[x]++;
                arry[y]++;

                if(arry[y]==1)
                {
                     updateBIT(BITreey, n+2, y, 1);

                }

                if(arrx[x]==1)
                {
                      updateBIT(BITreex, n+2, x, 1);

                }





            }
            else if(type==2)
            {
                int x , y;
                cin >>x>>y;

                arrx[x]--;
                arry[y]--;

                if(arry[y]==0)
                {
                    // cout<<rohit<<nline;

                   updateBIT(BITreey, n+2, y, -1);
                    // cout<<queryy(n+1 , y  ,y )<<nline;

                }

                if(arrx[x]==0)
                {
                      updateBIT(BITreex, n+2, x, -1);

                }


            }
            else
            {

                int x1 , y1 , x2 , y2;
                cin >>x1>>y1>>x2>>y2;

                int vl1 =  getSum(BITreex, x2) -  getSum(BITreex, x1-1);;

                int vl2 = getSum(BITreey, y2) -  getSum(BITreey, y1-1);;

                // cout<<x1<<' '<<x2<<' '<<vl1<<nline;
                // cout<<y1<<" "<<y2<<" "<<vl2<<nline;

                if(vl1==(x2 - x1 + 1) || vl2==(y2 - y1+1))
                {
                    cout<<yes<<nline;
                }
                else
                {
                    cout<<no<<nline;
                }

            }
        }

      



    }

    signed main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
        FAST


          int n , q;
        cin >>n>>q;

        int arrx[n+2];
        int arry[n+2];
        for(int i=0;i<n+2;i++)
        {
            arrx[i] = 0;
            arry[i] = 0;
        }

         int *BITreex = constructBITree(arrx, n+2);
          int *BITreey = constructBITree(arry, n+2);

      
        for(int i=0;i<q;i++)
        {
            int type;
            cin>>type;
            if(type==1)
            {
                int x , y;
                cin >>x>>y;

                arrx[x]++;
                arry[y]++;

                if(arry[y]==1)
                {
                     updateBIT(BITreey, n+2, y, 1);

                }

                if(arrx[x]==1)
                {
                      updateBIT(BITreex, n+2, x, 1);

                }





            }
            else if(type==2)
            {
                int x , y;
                cin >>x>>y;

                arrx[x]--;
                arry[y]--;

                if(arry[y]==0)
                {
                    // cout<<rohit<<nline;

                   updateBIT(BITreey, n+2, y, -1);
                    // cout<<queryy(n+1 , y  ,y )<<nline;

                }

                if(arrx[x]==0)
                {
                      updateBIT(BITreex, n+2, x, -1);

                }


            }
            else
            {

                int x1 , y1 , x2 , y2;
                cin >>x1>>y1>>x2>>y2;

                int vl1 =  getSum(BITreex, x2) -  getSum(BITreex, x1-1);;

                int vl2 = getSum(BITreey, y2) -  getSum(BITreey, y1-1);;

                // cout<<x1<<' '<<x2<<' '<<vl1<<nline;
                // cout<<y1<<" "<<y2<<" "<<vl2<<nline;

                if(vl1==(x2 - x1 + 1) || vl2==(y2 - y1+1))
                {
                    cout<<yes<<nline;
                }
                else
                {
                    cout<<no<<nline;
                }

            }
        }

      



        return 0;

    }   
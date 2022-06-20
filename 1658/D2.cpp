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
    #define int                long long    
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


  
/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

struct Node {
    Node *links[2]; 
    bool flag = false; 
    
    bool containsKey(char ch) {
        return (links[ch - '0'] != NULL); 
    }
    Node* get(char ch) {
        return links[ch-'0']; 
    }
    void put(char ch, Node* node) {
        links[ch-'0'] = node; 
    }
    void setEnd() {
        flag = true; 
    }
    bool isEnd() {
        return flag; 
    }
}; 
class Trie {
    private: Node *root; 
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Node(); 
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *node = root;
        for(int i = 0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                node->put(word[i], new Node()); 
            }
            node = node->get(word[i]); 
        }
        node->setEnd(); 
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node *node = root; 
        for(int i = 0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                return false; 
            }
            node = node->get(word[i]); 
        }
        if(node->isEnd()) {
            return true; 
        }
        return false; 
    }

    int minval(string word) {
        Node *node = root; 
        int ans = 0;
              // cout<<word<<nline;

        for(int i = 0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                // cout<<yes<<nline;
                ans = ans^((1ll<<(word.size()-i-1)));
                if(word[i]=='1')
                    word[i] = '0';
                else
                    word[i] = '1';
            }
            // else
            // {
            //     cout<<no<<nline;
            // }

            node = node->get(word[i]); 
        }
        return ans;
    }
    int maxval(string word) {
        Node *node = root; 
        int ans = 0;


        for(int i = 0;i<word.size();i++) {
            if(word[i]=='1')
            {

                if(node->containsKey('0'))
                {
                    ans = ans^((1ll<<(word.size()-i-1)));
                    word[i] = '0';
                }

            }
            else
            {
                if(node->containsKey('1'))
                {
                    ans = ans^((1ll<<(word.size()-i-1)));
                    word[i] = '1';
                }

            }
            node = node->get(word[i]); 
        }
        return ans;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *node = root; 
        for(int i = 0;i<prefix.size();i++) {
            if(!node->containsKey(prefix[i])) {
                return false; 
            }
            node = node->get(prefix[i]); 
        }
        return true; 
    }
};

string ToBinary(int value)
{
    string str = "";

    for(int i=0;i<=17;i++)
    {

        if(((1ll<<i)&value)!=0)
        {

            str+='1';
        }
        else
            str+='0';
    }

    reverse(all(str));

    return str;

}

void solve()
{

    int  l , r;
    cin >>l>>r;

    int n = r - l + 1;

    int a[n];

    for(int i=0;i<n;i++)
        cin >>a[i];

    vector<int> allpos;

    for(int i=0;i<n;i++)
    {

        allpos.push_back((l^a[i]));
    }


    Trie trie;

    for(int i=0;i<n;i++)
    {
        // cout<<ToBinary(a[i])<<nline;
        trie.insert(ToBinary(a[i]));
    }

    // cout<<yes<<nline;


    for(int i=0;i<n;i++)
    {
        if(trie.minval(ToBinary(allpos[i]))==l && trie.maxval(ToBinary(allpos[i]))==r)
        {
            cout<<allpos[i]<<nline;
            return;
        }

        // cout<<trie.minval(ToBinary(allpos[i]))<<nline;
        // cout<<trie.maxval(ToBinary(allpos[i]))<<nline;
    }


   



   


}
    

    


signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
    FAST

    int t = 1;
    cin >>t;

    while(t--)
    {
        solve();
    }

     
  
    return 0;

}   
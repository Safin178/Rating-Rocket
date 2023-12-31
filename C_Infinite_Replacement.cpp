// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

//typedef data type define korae
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define nl '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"
#define F first
#define S second
#define mem(a,b) memset(a,b,sizeof(a))      // 0 n -1 only
#define gcd(a,b) __gcd(a,b)
#define set_pre(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define mp make_pair
#define ever       ;1;

const double PI = acos(-1);
const double eps = 1e-9;

void printVec(vector<int> v , string s=""){
    cout << s <<' ';
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

bool is_vowel(char ch){
    string s="aeiouAEIOU";
    for(int i=0;s[i];i++){
        if(s[i]==ch){
            return 1;
        }
    }
    return 0;
}

//Debugger
 //pair
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
//vector
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
//set
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
//multiset
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
//map
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu () {
            cerr << endl;
}
//array
template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}
 

/*____________________________________________________________________________________________________________________________________*/



void solve(){
    /*
        Wa'Alaikumussalam Warahmatullah.

        1) t = "a". 
        eta diye string er kono change hobe na. So output 1

        2) t != "a" & t contains 'a'. 
        string s er jekono ekta index replace kore t boshaleo new ekta 'a' chole ashtese. eta infinitely choltei thakbe. total number of 'a's in string s always same thakbe. So output -1

        3) t doesn't contain 'a'. 
        Let say, s = "aaa". t = "b"
        ekhane s er 3 ta index change korte parben: 0, 1, 2. 
        index 0 use korle new string "baa"
        index 1 use korle "aba"
        index 0 & 1 use korle "bba"
        index 0, 1, 2 use korle "bbb"
        ar kono index use na korle "aaa"

        So, question ta evabe korte pari: ekhane total kotovabe index gula use korte partesen? etai answer. 
        in this case, 2^3 = 8 ta way paben: {}, {0}, {1}, {2}, {0, 1}, {0, 2}, {1, 2}, {0, 1, 2}.

        whatever t is, doesn't matter. [ Arif bhaiya ]..
    */
    string s, p;
    cin >> s >> p;
    
    int x , y;
    x = count(all(s),'a');
    y = count(all(p),'a');
    if(p == "a" || x == 0)
    {
        cout << 1<< nl;
        return;
    }
    else if(x>=1 && y>=1)
    {
        cout << -1<<nl;
        return;
    }
    else cout << (1LL <<x) << nl;
    
    
    

    

    

}

int main(){
    
    bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

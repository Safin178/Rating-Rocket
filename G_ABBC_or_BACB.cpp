// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define yesR {cout<<"YES\n";return;}
#define noR {cout<<"NO\n";return;}
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever ;1;
void print(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}
/*        ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
*/
void solve()
{
        string s;
    cin >> s;
    int sum = 0;
   // cout << 1 << nl;
    for(int i = 0; i < sz(s); i++)
    {
        if(s[i] == 'A')sum++;
        
        
    }
    if(sum==sz(s))
    {
        cout << 0 << nl;return;
    }
    if(s[0] =='B' || s.back() == 'B')
    {
        cout << sum << nl;
        return;
    }
    vi v;
    int cnt = 0;

    for(int i = 0; i <= sz(s); i++)
    {
        if(s[i] == 'A')cnt++;
        if(s[i] == 'B' && s[i+1] == 'B')
        {
            cout << sum << nl;
            return;
        }
        else if(s[i] == 'B'|| i == sz(s) )
        {
            //if(cnt!=0)
            v.pb(cnt);
            cnt = 0;
        }
    }
   // print(v);
   // int  x= *min_element(all(v));
    if(sz(v) <= 1)
    {
        cout << sum << nl;
    }
    else
    cout << sum - (*min_element(all(v))) << nl;


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





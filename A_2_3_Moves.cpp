
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
#define yesR cout<<"YES\n";return;
#define noR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}
/*        ／＞　　フ
　　　　　| 　_　 _|
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|      
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
    .       ／＞　 フ
           |   _　_ |   give up?
          ／` ミ__^ノ 
         /　　　　 |
        /　 ヽ　　 ﾉ           ╱|、
       /　　 |　|　|         (˚ˎ 。7    no.
   ／￣|　　 |　|　|          |、˜〵          
   | (￣ヽ＿_ ヽ_)__)        じしˍ,)ノ
   ＼二)
      
*/

void solve()
{
    ll n;
    cin >> n;
   
    if(n < 0)n = abs(n);

    if(n  == 1)
    {
        cout << 2 <<nl;return;
    }

    if(n % 3 == 0)
    {
        cout << n/3 << nl;
    }
    else cout << (n/3)+1 << nl;



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

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


//    int x , k;
//    while(1){
    
//    x= s.find("WUB",0);
//     if(x == -1)break;
   
    

//     s.replace(x,3," ");
//    }
//    for(int i = 1; i < sz(s); i++)
//    {
//         if(s[i] == ' ' && s[i-1] == ' ')
//         {
//             continue;
//         }
//         cout << s[i];
//    }
//    //c//out << s << nl;
bool f = 0;

    for(int i = 0; i < sz(s); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            if(f==1)
            {
                cout <<" ";
                f=0;
            }
            i+=2;
        }
        else 
        {
            cout <<s[i] ;
            f=1;
        }
    }



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
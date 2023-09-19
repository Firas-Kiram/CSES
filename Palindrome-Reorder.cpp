#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
#define MP make_pair
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define OUTRET(...) { OUT(__VA_ARGS__); return; }
#define OUT(...) cout << __VA_ARGS__ << '\n'
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<ln;
#define no cout<<"NO"<<ln;
#define sz(v) ((int)((v).size()))
#define ln '\n'
const ll INF = 1000000000;
const ll MOD = 1073741824;
const ll M = 1e6 + 8432;
const int N= 5e5+10;
const ll EPS = 1e-5;


void solve(){
    string s;cin >> s;
    int n = (int) sz(s);
    map<ll,ll> freq;
    for(int i=0;i<n;++i){
        freq[s[i]]++;
    }
    string c{},k{};
    for(auto i : freq){
        if(i.S != 1){
            int p = i.S/2;
            if(i.S % 2 != 0) k+= i.F;
            while(p--) c+= i.F;
        }else{
            k.clear();
            k += i.F;
        }
    }
    string a = c;
    reverse(all(c));
    int cnt = 0;
    for(auto i : freq){
        if(i.S%2 != 0) cnt++;
    }
    if(cnt > 1) OUTRET("NO SOLUTION");
    cout << a + k + c << ln;
 }
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
 
    return 0;
}

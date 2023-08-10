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
const ll M = 1e6 + 8432;
const ll MOD = 1073741824;
const int N=1e5+5;
bool vis[M];

bool check(ll x,ll t,vector<ll>&v){
    ll k = 0;
    for(auto i : v){
        k+=x/i;
    }
    return k >= t;
}

void solve() {
    ll n,t;
    cin>>n>>t;
    vector<ll>v(n);
    for(auto&t:v)cin>>t;
    ll l=-1,r=1,ans=-1;
    while(!check(r,t,v)) r*=2;
    while(l<=r){
        ll mid = (l+r);
        mid>>=1;
        if(check(mid,t,v)){
            r = mid - 1;
            ans = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << ans << ln;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

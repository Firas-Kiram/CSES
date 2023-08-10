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

ll check(ll x,vector<ll>&v,ll n){
    ll sum=0,op=1;
    for(int i=0;i<n;i++){
        if(sum + v[i] > x){
            op++;
            sum=0;
        }
        sum+=v[i];
    }
    return op;
}
void solve() {
        
    ll n,k,mx =-1;cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx = max(mx,v[i]);
    }
    ll l = mx,r = 1e18,ans=1e18;
    while(l<=r){
        ll mid = (l+r);
        mid>>=1;
        ll p = check(mid,v,n);
        if(p > k){
            l = mid + 1;
        }else{
            if(ans > mid){
                ans = mid;
                r = mid - 1;
            }
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

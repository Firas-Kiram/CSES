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

void solve() { 
    ll n,x;
    cin >> n >> x;
    vector<pi>v;
    for(int i=0;i<n;i++){
        ll c;cin>>c;
        v.pb(MP(c,i+1));
    }
    sort(all(v));
    ll l = 1,idx = 0,r = n-1;
    for(int i =0;i<n;i++){
        ll t = x - v[i].F;
        ll r = n-1;
        ll l = i+1;
        while(l<r){
            if(v[l].F+v[r].F == t){
                cout << v[i].S << ' ' << v[l].S << ' ' << v[r].S ;
                return;
            }
            if(v[l].F+v[r].F > t){
                r--;
            }else l++;
        }
    }
    cout << "IMPOSSIBLE" ;
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

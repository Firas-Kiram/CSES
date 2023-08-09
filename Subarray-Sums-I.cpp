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
    ll n,x,k=0,cnt=0;
    cin >> n >> x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll l = 0,r = 0,sum=0;
    while(r<n ){
        sum+=v[r];
        if(sum>x){
            while(sum>x){
                sum-=v[l];
                l++;
            }
        }
        r++;
        if(sum==x)cnt++;
    }
    cout << cnt;
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

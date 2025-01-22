#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;

void solve() {
    int n, x;
    int ans=INT_MIN;
    cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    for(int i=n-1;i>=0;i--){
        ans=max(ans, a[i]+(n-i-1)*x);
    }
    cout<<ans<<endl;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}


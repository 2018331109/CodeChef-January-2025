#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int a1 = a[0];
    int left = 1, right = 1000000;
    int l=0, r=0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a1){
                left = max(left, a[i] + 1);
        l=1;
        }
        if (a[i] > a1){
                right = min(right, a[i] - 1);
        r=1;
        }
    }
    int ans=0;
    if(l==0) ans+=a1-1;
    else ans+=(a1-left+1)/2;
    if(r==0) ans+=1000000-a1;
    else ans+=(right-a1+1)/2;

    cout << ans+1 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}


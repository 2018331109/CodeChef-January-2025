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

void solve() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n), res(n, LLONG_MAX);
    for (int i = 0; i < n; i++) cin >> a[i];

    int mx = -1;
    int ind=-1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            mx = 0;
            ind=i;
            res[i] = 0;
        } else if (ind != -1) {
            mx=max(mx, a[i]);
            int time = (mx + p - 1) / p;
            res[i] = min(res[i], time);
        }
    }

    ind = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) {
            mx = 0;
            ind=i;
            res[i] = 0;
        } else if (ind != -1) {
            mx=max(mx, a[i]);
            int time = (mx + p - 1) / p;
            res[i] = min(res[i], time);
        }
    }

    for (int i = 0; i < n; i++) cout << res[i] << " ";
    cout << endl;
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


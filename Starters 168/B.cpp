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
    int n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    int count1 = 0, inversions = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') count1++;
        else inversions += count1;
    }

    if (inversions % k == 0 && inversions <= x) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
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


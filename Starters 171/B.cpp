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
    int n;
    string s;
    cin >> n >> s;

    string patterns[6] = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
    int min_changes = LLONG_MAX;

    for (string &pattern : patterns) {
        int changes = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != pattern[i % 3]) changes++;
        }
        min_changes = min(min_changes, changes);
    }

    cout << min_changes << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}


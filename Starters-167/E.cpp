#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        int start = i + 1;
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                v[i][j] = (start + j - 1) % n + 1;
            }
        } else {
            for (int j = 0; j < n; j++) {
                v[i][j] = (start - j + n - 1) % n + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}


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
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> sortedP(n);

    // Input the permutation
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        sortedP[i] = p[i];
    }

    // Sort the copy of the array
    sort(sortedP.begin(), sortedP.end());

    // Check corresponding positions
    for (int i = 0; i < n; i++) {
        int bitCountOriginal = __builtin_popcount(p[i]);
        int bitCountSorted = __builtin_popcount(sortedP[i]);

        if (bitCountOriginal != bitCountSorted) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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


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
    int n; cin>>n;
    vector<vector<int>> v(n, vector<int>(n, 0));

    for(int i = 0, j = n - 1; i < n; i++, j--){
        v[i][j] = (n + 1) / 2;
    }

    int it = 1;
    for(int i = 0; i < n; i++){
        if(it == (n + 1) / 2){
            it++;
        }
        int st = it;
        for(int j = 0; j < n; j++){
            if(v[i][j] == (n + 1) / 2){
                continue;
            }
            if(st == (n+1)/2){
                st++;
            }
            v[i][j] = st;
            st = (st % n) + 1;
        }
        it=it%n+1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
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


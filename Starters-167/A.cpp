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
    string s;
    cin >> n >> s;
    sort(s.begin(), s.end());
    if(s[0]==s[n-1]){
        cout<<n<<endl;
    }
    else{
        cout<<1<<endl;
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


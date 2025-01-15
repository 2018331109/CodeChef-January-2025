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
    int n, k; cin>>n>>k;
    int a[n];
    map<int, int>mp;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        mx=max(mx, mp[a[i]]);
    }

    if(mx==mp[k]){
        cout<<0<<endl;
        return;
    }

    int cnt=0;
    for(int i=0;i<n-1;i++){
        mp[a[i]]--;
        cnt=mp[k];
        int f=0;
        for(auto it:mp){
            if(it.ss>cnt){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<1<<endl;
            return;
        }
    }

    mp.clear();
    for(int i=0;i<n;i++) mp[a[i]]++;

     for(int i=n-1;i>0;i--){
        mp[a[i]]--;
        cnt=mp[k];
        int f=0;
        for(auto it:mp){
            if(it.ss>cnt){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<1<<endl;
            return;
        }
    }
    cout<<2<<endl;

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


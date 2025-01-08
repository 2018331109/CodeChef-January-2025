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
   int n; cin>>n;
   string a, b; cin>>a>>b;
   int cnt1=0, cnt2=0, f=0;
   for(int i=0;i<n;i++){
    cnt1+=(a[i]=='1');
    cnt2+=(b[i]=='1');
    f+=(a[i]!=b[i]);
   }
   if(cnt1%2==1 or cnt2%2==1){
    yes;
    return;
   }

   if(f) yes;
   else no;
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


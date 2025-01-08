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
    vector<int> a(n);
    unordered_map<int, int> first, last;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!first.count(a[i])) first[a[i]] = i;
        last[a[i]] = i;
    }

    vector<pair<int, int>> ranges;
    for (auto &p : first) {
        if (last[p.first] > first[p.first]) {
            ranges.push_back({first[p.first], last[p.first]});
        }
    }

    sort(ranges.begin(), ranges.end());
    int start = -1, end = -1, cost = 0;

    for (auto &[l, r] : ranges) {
        if (start == -1) {
            start = l;
            end = r;
        } else if (l <= end) {
            end = max(end, r);
        } else {
            unordered_set<int> unique_elements(a.begin() + start, a.begin() + end + 1);
            cost += unique_elements.size();
            start = l;
            end = r;
        }
    }

    if (start != -1) {
        unordered_set<int> unique_elements(a.begin() + start, a.begin() + end + 1);
        cost += unique_elements.size();
    }

    cout << cost << endl;
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


#include <iostream>
#include <string>
using namespace std;

void solve() {
    int m, k;
    cin >> m >> k;
    string s;
    cin >> s;

    int swishes = 0;
    for (char c : s) {
        if (c == 'S') swishes++;
    }

    if(swishes>=k){
        cout<<m<<endl;
        return;
    }

    cout<<m+(k-swishes-1)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


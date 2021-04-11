/*
    Author: adad20
*/

#include <bits/stdc++.h>
using namespace std;

#define FAST         ios::sync_with_stdio(0); \
                     cout.tie(0); \
                     cin.tie(0);
#define ll             long long
#define mp             make_pair
#define pb             push_back
#define mod         1000000007
#define el             "\n"
#define len(x)         x.size()
#define ste(v)         v.begin(), v.end()
#define vll          vector<ll>
#define vpll         vector<pair<ll, ll>>
#define vc           vector<char>
#define mll          map<ll, ll>
#define sll          set<ll>
#define __lcm(a, b) (a*b/__gcd(a, b))
#define cmp [](int a, int b){return a>b;}

void solve() {
    // Solve here
    ll y, k, n;
    cin >> y >> k >> n;

    vector<ll> ans;
    // ll x = y % k;
    ll z = ceil(y / (double)k);
    ll x = k * z - y;
    for (int i = x; i <= n - y; i += k) {
        if(i==0) continue;
        ans.pb(i);
    }

    if (ans.size() == 0) cout << -1;
    else {
        for (auto i : ans) cout << i << " ";
    }

}

int32_t main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    FAST
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}

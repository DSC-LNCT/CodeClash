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

int validate(string s) {
    ll l = 0, r = 0, maxx = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '<') l++;
        else r++;

        if (l >= r) {
            maxx = max(maxx, 2 * r);
        }

        if (r > l) {
            r--;
        }
    }
    r = 0, l = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '>') l++;
        else r++;

        if (l >= r) {
            maxx = max(maxx, 2 * r);
        }

        if (r > l) {
            r--;
        }
    }
    return maxx;
}

void solve() {
    // Solve here
    int n;
    cin>>n;
    string s, r;
    cin >> s>>r;
    

    int a = validate(s);
    int b = validate(r);

    if(a>b) {
        cout<<"YES\n"<<a-b;
    } else if(b>a) {
        cout<<"NO\n"<<b-a;
    } else 
        cout<<"DRAW\n"<<0;

   

}

int32_t main() {
    FAST
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}

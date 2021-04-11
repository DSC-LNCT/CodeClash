#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n;
    cin>>n;
    ll ans = 0;
    while(n>0) {
        ll temp = log2(n);
        ll to_reduce = pow(2, temp);
        n -= to_reduce;
        ans++;
    }
    
    cout<<ans;
    return 0;
}

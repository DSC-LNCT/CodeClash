#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n, m, k, l;
    cin>>n>>m>>k>>l;
 
    if(n<m || (l+k)>n){
        cout<<"-1"<<endl;
        return 0;
    }
 
    ll ans= ceil((l+k)/(double)m);
 
    if(m*ans>n)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;
    return 0;
}


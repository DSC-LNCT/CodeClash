#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long dp[10000001];
bool prime[10000001];
void compute() {
    for(long long i=0;i<10000001;i++) prime[i] = 1;
    prime[1] = 0;
    prime[2] = 1;
    
    for(long long i=2;i<10000001;i++) {
        if(prime[i]) {
            for(long long j=i*i;j < 10000001;j+=i) {
                prime[j] = false;
            }
        }
    }
    dp[0]=dp[1] = 0;
    for(long long i=2;i<10000001;i++) {
        if(prime[i]) dp[i] = 1+dp[i-1];
        else dp[i] = dp[i-1];
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    compute();
    while(t--) {
        long long a, b;
        cin>>a>>b;
        if(a==0) {
            cout<<dp[b]<<endl;
        } else {
            cout<<dp[b]-dp[a-1]<<endl;
        }
    }

    
    return 0;
}


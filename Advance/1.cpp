#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n;
    cin>>n;
    
    n--;
    
    if(n&1) cout<<3;
    else cout<<2;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    int longestValidParentheses(string s) {
        if(s.length()<=1) return 0;
        
        int r = 0, l=0, ans = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='<') l++;
            else r++;
            
            if(r==l) {
                ans = max(ans, 2*r);
            } else if(r>l) {
                r=0, l=0;
            }
        }
        r=0, l=0;
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i]=='>') l++;
            else r++;
            
            if(r==l) {
                ans = max(ans, 2*r);
            } else if(r>l) {
                r=0, l=0;
            }
        }
        
        return ans;
    }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    
    while(t--) {
        string s;
        cin>>s;
        
        cout<<longestValidParentheses(s)<<endl;
    }
    return 0;
}

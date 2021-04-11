#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    if(s.length()==1) {
        if(isupper(s[0])) cout<<(char)(tolower(s[0]));
        else cout<<(char)(toupper(s[0]));
        
        return 0;
    }
    bool flag = false;
    
    if(islower(s[0])) {
        for(int i=1;i<s.length();i++) {
            if(islower(s[i])) flag = true;
        }
        if(!flag) {
            cout<<(char)(toupper(s[0]));
            for(int i=1;i<s.length();i++) cout<<(char)(tolower(s[i]));
        } else {
            cout<<s;
        }
    } else {
        for(int i=1;i<s.length();i++) {
            if(islower(s[i])) flag = true;
        }
        
        if(!flag) {
            for(int i=0;i<s.length();i++) cout<<(char)tolower(s[i]);
        } else {
            cout<<s;
        }
    }
    
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t != 0){
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i=i+2){
            cout<<s[i];
        }
        cout<<" ";
        for(int i=1; i<s.size(); i=i+2){
            cout<<s[i];
        }
        cout<<endl;
        t--;
    }
           
    return 0;
}
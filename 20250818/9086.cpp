#include<iostream>
using namespace std;
#include<string>

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        cout<<s[0]<<s[n-1]<<endl;
    }
}
#include<iostream>
using namespace std;
#include<string>
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long int r=31;
    long long int m= 1234567891;
    long long int hash=0;
    for (int i = 0; i < n; i++){
        unsigned long long int a = s[i]-'a'+1;
        for (int j=0;j<i;j++){
            a= (a*r)%m;
        }
        hash = (hash + a)%m;
    }
    cout << hash << endl;
    return 0;
}
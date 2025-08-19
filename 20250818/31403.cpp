#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
int main(){
    string a,b,c;
    cin >> a >> b >> c;
    string apb = a + b;
    int numadd = stoi(a) + stoi(b) - stoi(c);
    int stradd = stoi(apb) - stoi(c);
    cout << numadd << endl << stradd << endl;
}
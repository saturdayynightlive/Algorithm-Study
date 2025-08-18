#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>


int main(){
    string s;
    cin >> s;
    int isbn=0;
    bool isjjak;
    for(int i = 0; i < s.length()-1; i++){
        if(isdigit(s[i])){
            if(i%2==0)isbn+= s[i]-'0';
            else isbn+= (s[i]-'0')*3;
        }
        else{
            if(i%2==1)isjjak=true;
            else isjjak=false;
        }
    }
    isbn+= s[s.length()-1]-'0';
    if(isjjak){
        for(int k = 0; k < 10; k++){
            if ((isbn+3*k) % 10 == 0) {
                cout << k << endl;
                return 0;
            }
        }
    }
    else{
        for(int k = 0; k < 10; k++){
            if ((isbn+k) % 10 == 0) {
                cout << k << endl;
                return 0;
            }
        }
    }
    return 0;
}


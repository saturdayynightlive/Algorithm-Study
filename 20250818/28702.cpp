#include<iostream>
using namespace std;
#include<cstdlib>
#include<string>
#include<cctype>

int main(){
    string a,b,c;
    cin >> a >> b >> c;
    int ans=0;
    if(isdigit(a[0])){
        ans=stoi(a)+3;
    }
    else if(isdigit(b[0])){
        ans=stoi(b)+2;
    }
    else if(isdigit(c[0])){
        ans=stoi(c)+1;
    }
    if(ans%3==0){
        if (ans %5 ==0 ){
            cout <<"FizzBuzz" << endl;

        }
        else{
            cout <<"Fizz" << endl;
        }
    }
    else if(ans%5==0){
        cout <<"Buzz" << endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}
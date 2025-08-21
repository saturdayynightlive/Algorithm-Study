#include<iostream>
using namespace std;
#include<stack>
#include<string>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin >> input;
    stack<int> s;
    long long  total=0;

    for ( auto c : input ) {
        if ( c == '(' ) {
            s.push(-2);
        }
        else if (c == '['){
            s.push(-3);
        }

        else if (c == ')') {
            long long int temp=0;
            if(s.empty() || s.top() == -3) {
                cout << 0;
                return 0;
            }
            while ( !s.empty() && s.top() != -2) {
                temp+=s.top();
                s.pop();
            }
            if (s.empty()) {
                cout << 0 << endl;
                return 0;
            }
            if(temp==0){
                s.pop();
                s.push(2);
            }
            else{
                s.pop();
                s.push(2*temp);
            }
        }
        else if (c==']'){
            long long int temp=0;
            if(s.empty() || s.top() == -2) {
                cout << 0;
                return 0;
            }
            while ( !s.empty() && s.top() != -3) {
                temp+=s.top();
                s.pop();
            }
            if (s.empty()) {
                cout << 0 << endl;
                return 0;
            }
            if(temp==0){
                s.pop();
                s.push(3);
            }
            else{
                s.pop();
                s.push(3*temp);
            }
        }
        else {
            cout<<0<<endl;
            return 0;
        }
    }

    while(!s.empty()){
        if(s.top()<0){
            cout<<0<<endl;
            return 0;
        }
        else total+=s.top();
        s.pop();
    }
    cout<<total<<endl;
    return 0;

}


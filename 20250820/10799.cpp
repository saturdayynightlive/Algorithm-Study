#include<iostream>
using namespace std;
//stack
#include<stack>
#include<string>

int main(){
    stack<char> s;
    char n;
    string input;
    cin >> input;
    int lazer=0;
    int count=0;
    int logdone=0;
    for(auto c : input){
        if(c=='('){
            s.push(c);
        }
        else if(c==')'){
            if(s.top() == '('){
                s.push(c);
                lazer++;
                count+=s.size() - lazer *2 - logdone*2 ;
                
            }
            else{
                s.push(c);
                count++;
                logdone++;
            }
        }

    }
    cout << count << endl;
    return 0;
}
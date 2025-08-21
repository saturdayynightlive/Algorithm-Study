#include<iostream>
using namespace std;
#include<stack>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    stack<int> s;
    int cmd;
    while (n--){
        cin >> cmd;
        if(cmd ==1){
            int num;
            cin >> num;
            s.push(num);
        }
        if(cmd==2){
            if(!s.empty()){
                cout << s.top()<<"\n";
                s.pop();
            }
            else{
                cout << -1<<"\n";
            }
        }
        if(cmd==3){
            cout << s.size()<<"\n";
        }
        if(cmd==4){
            cout << s.empty()<<"\n";
        }
        if (cmd==5){
            if(!s.empty()){
                cout << s.top()<<"\n";
            }
            else{
                cout << -1<<"\n";
            }
        }
}
}
#include<iostream>
using namespace std;

#include<deque>
#include<vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int m=n;

    vector<int> v(2*n+1);
    int head = n+1;
    int tail = n+1;
    int size=0;
    while(m--) {
        int cmd;
        cin >>cmd;
        if(cmd == 1){
            int num;
            cin >> num;
            v[head--] = num;
            size++;
        }
        else if(cmd == 2){
            int num;
            cin >> num;
            v[++tail] = num;
            size++;
        }
        else if(cmd==3){
            if(size>0){
                cout << v[head+1] << "\n";
                head++;
                size--;
            }
            else cout << -1 << "\n";
        }
        else if(cmd ==4){
            if(size>0){
                cout << v[tail] << "\n";
                tail--;
                size--;
            }
            else cout << -1 << "\n";
        }
        else if(cmd ==5){
            cout << size << "\n";
        }
        else if(cmd ==6){
            if(size==0) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(cmd ==7){
            if(size > 0) {
                cout << v[head+1] << "\n";
            }
            else cout << -1 << "\n";
        }
        else if(cmd ==8){
            if(size > 0) {
                cout << v[tail] << "\n";
            }
            else cout << -1 << "\n";
        }
    }
    return 0;
}
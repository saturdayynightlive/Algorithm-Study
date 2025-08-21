#include<iostream>
#include<stack>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue <int> line;
    stack <int> storage;
    int count=0;
    while(n--){
        int a;
        cin >> a;
        line.push(a);
    }
    
    while(1){
        if(storage.empty() && line.empty()){
            cout << "Nice" << endl;
            return 0;
        }
        if(line.empty() && storage.top() != count+1){
            cout << "Sad" << endl;
            return 0;
        }
        
        if(!line.empty() && line.front() == count + 1){
            line.pop();
            count++;
        }
        else if(!storage.empty() && storage.top() == count + 1){
            storage.pop();
            count++;
        }
        else{
            if(!line.empty()){
                storage.push(line.front());
                line.pop();
            }
        }
    }
    return 0;
}

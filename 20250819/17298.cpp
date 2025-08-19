#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    stack<int> s;
    vector<int> v(1000001, 0); 
    vector <int> ans(n, -1);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i=n-1; i >= 0; i--) {
        while(!s.empty() && v[s.top()] <= v[i]) {
            s.pop();
        }
        if(!s.empty()) {
            ans[i] = v[s.top()];
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++) {
        cout<< ans[i] << " ";
    }

    
    return 0;

}
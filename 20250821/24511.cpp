#include<iostream>
using namespace std;
#include<vector>
#include<deque>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque <int> q;
    //nx2 vector
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> v[i][0];
    }
    for (int i=0;i<n;i++){
        cin >> v[i][1];

        if (v[i][0] == 0) {
            q.push_back(v[i][1]);
        }
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int a;
        cin >> a;
        q.push_front(a);
        cout << q.back() << " ";
        q.pop_back();

    }
}
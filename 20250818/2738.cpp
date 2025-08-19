#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> matrix(n*m);
    for (int i = 0; i < n*m; i++) {
        cin >> matrix[i];
    }
    for (int i=0;i<n*m;i++){
        int add;
        cin >> add;
        matrix[i] += add;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << matrix[i * m+ j] << " ";
        }
        cout << endl;
    }
}
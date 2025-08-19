#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cin >> n;
    vector<int> v(6);
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }
    int t,p;
    cin >> t >> p;
    int mint=0;
    for(int i = 0; i < 6; i++){
        if (v[i]%t!=0)mint+=v[i]/t+1;
        else mint+=v[i]/t;
    }
    cout << mint <<endl<< n/p << " "<<n%p << endl;
    return 0;
}

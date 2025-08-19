#include<iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        long long ans = factorial(n) / (factorial(m) * factorial(n - m));
        cout << ans << "\n";
    }

}
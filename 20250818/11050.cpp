#include<iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main(){
    int n,k;
    cin >> n >> k;
    int result = factorial(n) / (factorial(k) * factorial(n - k));
    cout << result << endl;
    return 0;
}
    
    
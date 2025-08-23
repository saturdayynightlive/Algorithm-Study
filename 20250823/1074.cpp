#include<iostream>
using namespace std;

int z(int n, int r, int c){
    if(n==0)return 0;
    int half = 1<<(n-1);
    if(r<half && c<half )return z(n-1,r,c);
    if(r<half && c>=half) return z(n-1, r,c-half)+half*half;
    if(r>=half && c<half) return z(n-1,r-half,c)+half*half*2;
    if(r>=half && c>=half) return z(n-1,r-half,c-half)+half*half*3;
}

int main(){
    int N,r,c;
    cin>>N>>r>>c;
    cout<<z(N,r,c);
}
#include<iostream>
using namespace std;

void star(int i, int j, int n){
    if(n==3)
    if(i<n/2){
        star(i,j,n/2);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            star(i,j,n);
        }
    }
}
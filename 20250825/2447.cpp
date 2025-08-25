#include<iostream>
using namespace std;

void star(int x,int y, int n){
    if(n>=3 and (x/(n/3))%3==1 and (y/(n/3))%3==1 ){
        cout<<" ";
    }
    else{
        if(n==1)cout<<"*";
        else{
            star(x,y,n/3);
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            star(i,j,n);
        }
        cout<<"\n";
    }    
}
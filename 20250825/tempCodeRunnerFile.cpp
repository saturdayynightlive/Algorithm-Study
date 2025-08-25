#include<iostream>
#include<string>
using namespace std;

int board[64][64];
void quadtree(int sx,int ex,int sy,int ey){
    int diff=0;
    for(int i=sx;i<ex;i++){
        for(int j=sy;j<ey;j++){
            if(board[i][j]!=board[sx][sy]){
                diff=1;
            }
        }
    }
    if(diff==1){
        cout<<"(";
        quadtree(sx,sx+(ex-sx)/2,sy,(ey-sy)/2);
        quadtree(sx+(ex-sx)/2,ex,sy+(ey-sy)/2,ey);
        quadtree(sx,(ex-sx)/2,sy,(ey-sy)/2);
        quadtree(sx+(ex-sx)/2,ex,sy+(ey-sy)/2,ey);
        cout<<")";
        return;

    }
    else{
        cout<<board[sx][sy];
        return;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        for(int j=0;j<n;j++){
            board[i][j]=input[j]-'0';
        }
    }

    quadtree(0,n,0,n);
}
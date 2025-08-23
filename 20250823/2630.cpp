#include<iostream>
using namespace std;

int board[2187][2187];

void cut(int sx,int ex, int sy, int ey, int num, int* count){
    int n=ex-sx;
    bool end=false;
    if(n==0){
        count[num]++;
        return;
    }
    for(int i=sx;i<ex;i++){
        for(int j=sy;j<ey;j++){
            if(num!=board[i][j]){
                end=1;
                for(int a=0;a<2;a++){
                    for(int b=0;b<2;b++){
                        cut(n/2*a+sx,n/2*(a+1)+sx, n/2*b+sy,n/2*(b+1)+sy,board[n/2*a+sx][n/2*b+sy],count);
                    }
                }
                return;
            }
        }
    }
    if(end==0)
    count[num]++;
    return;
}

int main(){
    int N;
    cin>>N;
    int count[2]={0,0};
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>board[i][j];
        }
    }

    cut(0,N,0,N,board[0][0],count);
    cout<<count[0]<<endl<<count[1];
}
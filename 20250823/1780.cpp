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
                for(int a=0;a<3;a++){
                    for(int b=0;b<3;b++){
                        cut(n/3*a+sx,n/3*(a+1)+sx, n/3*b+sy,n/3*(b+1)+sy,board[n/3*a+sx][n/3*b+sy],count);
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
    int count[3]={0,0,0};
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int a;
            cin>>a;
            board[i][j]=a+1;
        }
    }

    cut(0,N,0,N,board[0][0],count);
    cout<<count[0]<<endl<<count[1]<<endl<<count[2];
}
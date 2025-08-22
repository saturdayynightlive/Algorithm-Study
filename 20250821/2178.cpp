#include<iostream>
using namespace std;
#include<queue>
#include<string>

int board[101][101];
int dist[101][101];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dist[i][j]=-1;
        }
    }
    dist[0][0]=1;
    string input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
        for(int j=0;j<m;j++){
            board[i][j]=input[i][j]-'0';
        }
    }
    queue <pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        auto cur=q.front();
        int curdist=dist[cur.first][cur.second];
        q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx<0 or nx>=n or ny<0 or ny>=m)continue;
            if(dist[nx][ny]!=-1 or board[nx][ny]==0)continue;
            dist[nx][ny]=curdist+1;
            q.push({nx,ny});
        }
    }
    cout<<dist[n-1][m-1];
}
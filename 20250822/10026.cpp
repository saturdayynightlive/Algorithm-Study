#include<iostream>
#include<queue>
using namespace std;
#include<string>
int map[101][101];
int visited[101][101];
int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        for(int j=0;j<n;j++){
            if(input[j]=='R')map[i][j]=1;
            if(input[j]=='G')map[i][j]=2;
            if(input[j]=='B')map[i][j]=3;

        }
    }
    for(int a=0;a<2;a++){
        int area=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0){
                    area++;
                    queue<pair<int,int>>q;
                    visited[i][j]=1;
                    q.push({i,j});

                    while(!q.empty()){
                        auto cur=q.front();q.pop();
                        for(int k=0;k<4;k++){
                            int nx=cur.first+dx[k];
                            int ny=cur.second+dy[k];
                            if(nx<0 or nx>=n or ny<0 or ny>=n)continue;
                            if(map[nx][ny]!=map[i][j] or visited[nx][ny]!=0)continue;

                            visited[nx][ny]=1;
                            q.push({nx,ny});
                        }
                    }
                }
            }
        }
        cout<<area<<" ";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
                if(map[i][j]==2)map[i][j]--;
            }
        }
    }
}
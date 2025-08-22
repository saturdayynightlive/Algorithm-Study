#include<iostream>
#include<queue>

using namespace std;
int box[1001][1001];
int days[1001][1001];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

queue <pair<int,int>> q;


int main(){
    int n,m;
    int anik=0;
    cin>>m>>n;
    for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            days[i][j]=-1;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>box[i][j];
            if(box[i][j]==1){
                q.push({i,j});
                days[i][j]=0;
            }
            if(box[i][j]==0){
                anik++;
            }
        }
    }

    while(!q.empty()){
        auto cur=q.front();q.pop();

        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx<0 or nx >=m or ny<0 or ny>=n)continue;
            if(box[nx][ny]!=0 or days[nx][ny]!=-1)continue;
            days[nx][ny]= days[cur.first][cur.second]+1;
            q.push({nx,ny});
            anik--;
        }
    }
    int mx=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(box[i][j]==0 && days[i][j]==-1){
                cout<<-1<<endl;
                return 0;
            }
            if(days[i][j]>mx) mx=days[i][j];
        }
    }
    cout<<mx<<endl;


}
#include<iostream>
#include<queue>
#include<tuple>
#include<string>
using namespace std;

int box[31][31][31];
int vtime[31][31][31];
int dx[6]={1,-1,0,0,0,0};
int dy[6]={0,0,1,-1,0,0};
int dz[6]={0,0,0,0,1,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int h, m,n;
        cin>>h>>m>>n;
        if(h==0 and m==0 and n==0)break;
        int end[3]={0};
        queue <tuple<int,int,int>> q;
        for(int i=0;i<h;i++){
            for(int j=0;j<m;j++){
                string input;
                cin>>input;
                for(int k=0;k<n;k++){

                    vtime[i][j][k]=0;
                    if(input[k]=='S'){
                        box[i][j][k]=1;
                        q.push({i,j,k});
                    }
                    if(input[k]=='.'){
                        box[i][j][k]=1;
                    }
                    if(input[k]=='#'){
                        box[i][j][k]=0;
                    }
                    if(input[k]=='E'){
                        box[i][j][k]=1;
                        end[0]=i;
                        end[1]=j;
                        end[2]=k;
                    }
                }
            }
        }


        while(!q.empty()){
            auto [z,x,y]=q.front();q.pop();
            for(int i=0;i<6;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                int nz=z+dz[i];
                if(nx<0 or nx>=m or ny<0 or ny>=n or nz<0 or nz>=h)continue;
                if(box[nz][nx][ny]==0 or vtime[nz][nx][ny]!=0)continue;
                vtime[nz][nx][ny]=1+vtime[z][x][y];
                q.push({nz,nx,ny});
            }
        }
        if(vtime[end[0]][end[1]][end[2]]==0){
            cout<<"Trapped!"<<"\n";
        }
        else cout<<"Escaped in "<<vtime[end[0]][end[1]][end[2]]<<" minute(s).\n";
    }
}
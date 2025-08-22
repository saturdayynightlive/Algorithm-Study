#include<iostream>
#include<queue>
using namespace std;

int step[100001];
int dy[2]={1,-1};
int main(){
    int n,k;
    for(int i=0;i<100001;i++){
        step[i]=-1;
    }
    cin>>n>>k;
    queue<int> q;
    q.push(n);
    step[n]=0;

    while(!q.empty()){
        auto cur=q.front();q.pop();
        for(int i=0;i<3;i++){
            int ny;
            if(i==2){
                ny = cur*2;
            }
            else{
                ny=cur+dy[i];
            }
            if(ny<0 or ny>100001)continue;
            if(step[ny]!=-1)continue;
            step[ny]=step[cur]+1;
            q.push(ny);
        }
    }
    cout<<step[k];
    
}
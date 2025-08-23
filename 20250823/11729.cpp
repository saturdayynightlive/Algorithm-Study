#include<iostream>
#include<vector>
using namespace std;

vector <pair<int,int>> v;
int num_shift=0;
void hanoi(int start, int end, int num){
    if(num==1 ){
        v.push_back({start,end});
        num_shift++;
        return;
    }
    hanoi(start, 6-start-end, num-1);
    v.push_back({start,end});
    num_shift++;
    hanoi(6-start-end, end, num-1);
}


int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    int n;
    cin>>n;

    hanoi(1,3,n);
    cout<<num_shift<<endl;
    for(auto shift: v){
        cout<<shift.first<<" "<<shift.second<<"\n";
    }
}
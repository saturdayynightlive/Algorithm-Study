#include<iostream>
#include<stack>
using namespace std;

int main(){
    int N;
    cin>>N;
    stack<int> s;
    long long total=0;
    int x;
    cin>>x;
    s.push(x);
    
    for (int i=0; i<N-1; i++){
        int x;
        cin>>x;
        
        while(s.size()!=0 && s.top()<=x){
            s.pop();
        }
        total+=s.size();
        s.push(x);
        
    }
    cout<<total;

}   

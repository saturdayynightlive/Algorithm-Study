#include<iostream>
using namespace std;
#include<vector>
#include<cmath>
#include<algorithm>

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    if (n==0){
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int removal = round(0.15*n);
    double sum=0;
    for(int i=removal;i<n-removal;i++){
        sum+=v[i];
    }
    cout<<round(sum/(double)(n-2*removal));

}
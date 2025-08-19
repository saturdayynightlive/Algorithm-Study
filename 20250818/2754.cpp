#include<iostream>
using namespace std;

int main(){
    char big;
    cin >> big;
    
    float score=0.0;
    if (big=='A')score+=4;
    else if (big=='B')score+=3;
    else if (big=='C')score+=2;
    else if (big=='D')score+=1;
    else if (big=='F'){
        cout<<"0.0"<<endl;
        return 0;
    }
    char small;
    cin >> small;
    if (small=='+')score+=0.3;
    else if (small=='-')score-=0.3;

    printf("%.1f\n",score);
    return 0;
}

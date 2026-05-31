#include<iostream>
#include<math.h>
using namespace std;
void Armstrong(int n){
    int m =n;
    int og=n;
    int cnt=0;
    int dig=0;
    while(n!=0){
        n=n/10;
        cnt++;
    }
    int sum =0;
    while(m!=0){
        dig =m%10;
        sum += pow(dig,cnt);
        m=m/10;
    }
    if(sum==og){
        cout<<og<<" Is An Armstrong Number";
    }
    else{
        cout<<og<<" Is Not An Armstrong Number";
    }
}
int main(){
    Armstrong(153);
}
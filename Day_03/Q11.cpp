#include<iostream>
using namespace std;
void gcd(int n,int m){
    int gcd=1;
    if(n<m){
        for (int i = 2; i <=n; i++){
        if(n%i==0){
            if(m%i==0){
                gcd=i;
            }
        }
    }
    }
    else{
        for (int i = 2; i <=m; i++){
        if(m%i==0){
            if(n%i==0){
                gcd=i;
            }
        }
    }
    }
    cout<<gcd;    
}
int main(){
    gcd(12,36);
}
#include<iostream>
using namespace std;
void bits(int n){
    int count=0;
    while (n)
    {
        int bits = n&1;
        if(bits) count++;
        n = n>>1;
    }
    
    cout<<count;
}
int main(){
    bits(27);
}
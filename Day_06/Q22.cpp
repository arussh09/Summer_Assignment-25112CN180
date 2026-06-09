#include<iostream>
#include<math.h>
using namespace std;
void binToDec(int n){
    int og =n;
    int dec=0;
    int place=0;
    while(n!=0){
       int rem = n%10;
       int weight =pow(2,place);
       dec += rem*weight;
       place++;
       n=n/10;

    }
    cout<<og<<" : "<<dec;

}
int main(){
    binToDec(11100);
}
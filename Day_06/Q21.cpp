#include<iostream>
#include<string.h>
using namespace std;
void decToBin(int n){
    string bin ="";
    int og=n;
    while (n!=0)
    {
        int rem = n%2;
        if(rem==0){
            bin ="0"+bin;
        }
        else{
            bin = "1"+bin;
        }
        n=n/2;
        }
    cout<<og <<" : "<<bin;
    
}
int main(){
    decToBin(28);
}
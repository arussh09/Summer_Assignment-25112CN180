#include<iostream>
using namespace std;
void strong(int n){
    int og =n;
    int sum =0;
    
    int dig=0;
    while(n!=0){
        dig = n%10;
        int fact=1;
        for (int i = 1; i <=dig; i++)
        {
            fact *=i;
        }
        sum += fact;
        n=n/10;
    }
    if(og==sum){
        cout<<og<<" Is A Strong Number";

    }
    else{
        cout<<og<< " Is Not A Strong Number";
    }
    
    
}
int main(){
    strong(145);
}
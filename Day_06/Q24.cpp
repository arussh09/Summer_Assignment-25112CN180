#include<iostream>
using namespace std;
void pow(int x, int n){
    int og=n;
    int val=1;
    while(n!=0){
        val *=x;
        n--;

    }
    cout<<x<<"^"<<og<<" : "<<val<<endl;

}
int main(){
    pow(5,2);
}
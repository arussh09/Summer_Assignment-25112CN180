#include<iostream>
using namespace std;
void perf(int n){
    int sum =0;
    for (int i = 1; i <= n/2; i++)
    {
        if(n%i==0){
            sum += i;
        }
    }
    if(n==sum){
        cout<<n<< " Is A Perfect Number";
    }
    else{
        cout<<n<<" Is Not A Perfect Number";
    }
}
int main(){
    perf(28);

}
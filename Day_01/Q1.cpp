#include<iostream>
using namespace std;
void sum(int n){ 
    int cnt=0;
    for (int i = 1; i <=n; i++)
    {
        cnt += i;
    }
    cout << "Sum : "<<cnt;
}
int main(){
    sum(5);
}
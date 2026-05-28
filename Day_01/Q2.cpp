#include<iostream>
using namespace std;
void mult(int n){
      for (int i = 1; i <=10; i++)
      {
        cout<<n<<" * "<<i<<" : "<<n*i<<endl;
      }
      
}
int main(){
    mult(5);
}
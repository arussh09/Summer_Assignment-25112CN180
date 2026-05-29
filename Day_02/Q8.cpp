#include<iostream>
using namespace std;
void palindrome(int n){
    int num=n;
    int og=n;
    int cnt=0;
    while (n!=0)
    {
        n = n/10;
        cnt++;
    }
    int rem =0;
    int revs =0;
    while(cnt!=0){
        rem = num%10;
        revs  = revs*10 + rem;
        num = num/10;
        cnt--;
    }
    if (og==revs)
    {
        cout<<og<<" Is A Palindrome";
    }
    else{
        cout<<og<<" Is Not A Palindrome";
    }
    
}
int main(){
    palindrome(121);
}
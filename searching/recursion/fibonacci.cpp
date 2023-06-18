#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n == 0)return 0;
    if(n == 1)return 1;

    int zero = fib(n-1);
    int one =  fib(n-2);

    return zero+one;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;

    return 0;
}
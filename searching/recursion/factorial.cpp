#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int sp = factorial(n-1);
    int bp = n*sp;

    return bp;
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}
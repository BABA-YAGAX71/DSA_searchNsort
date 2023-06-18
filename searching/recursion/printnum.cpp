#include<bits/stdc++.h>
using namespace std;
void print(int n){
    //base case
    if(n == 0){
        return ;
    }
    //recursion func
    print(n-1);
    cout<< n <<endl;

}
//main function
int main(){
    int n;
    cin>> n;
    cout<<endl;
    print(n);

    return 0;
}
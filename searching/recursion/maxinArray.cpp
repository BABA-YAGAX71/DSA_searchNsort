#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[0]<ar[i]){
            ar[0]=ar[i];
        }
    }
    cout<<ar[0]<<endl;
    return 0;
}
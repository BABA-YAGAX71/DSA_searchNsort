#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n,i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[i]=a[j];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
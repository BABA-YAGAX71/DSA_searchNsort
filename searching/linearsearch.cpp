#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,pos=-1;
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            pos=i+1;
            break;
        }
    }
    if(pos==-1){
        cout<<"elment not found"<<endl;
    }
    else{
        cout<<"element found at "<<pos <<"th";
    }
    return 0;
}
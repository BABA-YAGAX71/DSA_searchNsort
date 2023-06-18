#include<bits/stdtr1c++.h>
using namespace std;

int binarysearch(int a[],int x,int low,int high){
    while(low<=high){
        int mid= low+( high - low ) / 2;
        if(a[mid] == x)return mid;
        if(a[mid] < x)
        low = mid +1;
        else{
            high = mid -1;
        }
    }
    return -1;
}
int main(void){
    int a[]={34,56,78,32,11};
    int x;
    cin>>x;
    int n= sizeof(a) / sizeof(a[0]);
    int result = binarysearch(a, x, 0, n-1);
    if(result == -1){
        printf("Element is not found");
    }
    else{
        printf("elemnet is found at index %dth",result);
    }
}
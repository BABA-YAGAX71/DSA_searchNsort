#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,b)			for(int i=a;i<=b;i++)
#define rfo(i,a,b)			for(int i=a;i>=b;i--)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ss second
#define ff first 
#define ub upper_bound
#define lb lower_bound
typedef vector<int> vi;
typedef set<int> st;
#define dead return 0;


ll maxsubarraysum(int arr[], int n){
    ll sum = 0, maxi = LONG_MIN;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum > maxi){
        maxi = sum;
       }
       if(sum<0){
        sum =0;
       }
    }
    return maxi;

}
int32_t main(){
    fucking_fast;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsubarraysum(arr, n)<<endl;
    dead;
}
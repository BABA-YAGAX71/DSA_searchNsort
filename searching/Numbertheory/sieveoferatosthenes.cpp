//sieve of  eratosthenes//

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
#define dead return 0;


const int N = 1e7+10;
vector<bool> isprime(N, 1);

int main(){
    isprime[0] = isprime[1] = false;
    for(int i =2;i<N;++i){
        if(isprime[i] == true){
            for(int j =2*i ;j<N;j+=i){
                isprime[j] = false;
            }
        }
    }

    int q;
    cin>>q;

    while(q--){
        int num;
        cin>>num;
        if(isprime[num]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"
        }
    }
    dead;
}
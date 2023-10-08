#include<bits/stdc++.h>
using namespace std;
void palindrome(){
    string a;
    cin>>a;
    string b;
    for(int i = a.size()-1; i>=0 ; --i){
        b.push_back(a[i]);
    }
    if(a == b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

//const int n = 2e7;
//int a[n];
//int main()
//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long int
//#define ld long double
//#define pb push_back
//#define ss second
//#define ff first 
//#define ub upper_bound
//#define lb lower_bound
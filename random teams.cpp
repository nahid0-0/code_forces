#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll        long long
#define fl(s, e)      for(int i=s; i<e; ++i)         
#define vecint   vector< int > 
#define intmeme(s, e, val) fl(s, e+1){arr[i]=val;}
#define arrin(string, n)   fl(0, n){ cin>>string[i];}
#define arrout(string, n)  fl(0, n){cout<<string[i]<<" ";} cout<<endl;
#define bug   cout<<"bug"<<endl;
#define dbg(x) cout << "debug: " << #x << ": " << (x) <<endl;
#define CY  cout<<"YES"<<endl;
#define CN cout<<"NO"<<endl;

ll int ans(long long int x){
        
        return x*(x-1)/2;
}

int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #endif
        ll int n, m;
        cin>>n>>m;
        // cout<<n<<endl;
        ll int div = n/m, remain=n%m;
        ll int minval=(m-remain)*ans(div) + (remain * ans(div+1));
        ll int maxval;
        maxval=ans(n-m+1);
        cout<<minval<<" "<<maxval<<endl;
        

        return 0;
}

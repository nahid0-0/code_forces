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



int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #endif
        int n, m, k; cin>>n>>m>>k;
        int arr[m];
        arrin(arr, m);
        int fedor; cin>>fedor;
        int p=fedor;
        int cnt=0;
        int mask=1;
        fl(0, m){
                int temp = arr[i] ^ fedor;
                int diff=0;
                for(int j=0; j<32; j++){
                        if(temp>>j & mask) diff++;
                }
                if(diff<=k) cnt++;
        }
        cout<<cnt<<endl;
        
        
        return 0;
}


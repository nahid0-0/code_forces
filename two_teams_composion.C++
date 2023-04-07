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

void test(){
        int n; cin>>n;
        int can[1000000]={0};
        int maxi=INT_MIN;
	for(int i=0; i<n; ++i){
		int x; cin>>x;
		if(x>maxi) maxi=x;
		can[x]++;
	}
        int maxval=INT32_MIN, dist=0;

	for(int i=1; i<=maxi; ++i){
		if(can[i]>maxval) maxval=can[i];
		if(can[i]!=0) dist++;
	}
	--dist;
	if(maxval>dist){
		if(maxval-dist>=2) cout<<dist+1<<endl;
		else cout<<dist<<endl;
	}
	else cout<<maxval<<endl;

	
         
	
        
}
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
                test();
        }
     
        return 0;
}


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
	int n, x; cin>>n>>x; 
	int arr[n];
	int odds=0, evens=0;
	fl(0, n){
		int a; cin>>a;
		// dbg(a);
		if(a%2==1) odds++;
		else evens++;
	}
	if(odds==0){
		cout<<"no"<<endl;
		return;
	}
	if(evens==0){
		if(x%2==0) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
		return;
	}
	if(odds%2==0) odds--;
	if(odds+evens>=x){
		cout<<"yes"<<endl;

	}
	else{
		cout<<"no"<<endl;
	}
        
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


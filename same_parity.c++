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


bool even(int n, int k){
	int rem=n-k;
	if(rem<0) return false;
	// if(n%k==1) return false;
	// if((n/k)%2==rem%2) return false;
	if(2*k>n) return false;
	if(rem%2==0) return false;
	cout<<"yes"<<endl;
        fl(0, k-1){
        	cout<<2<<" ";
        }
        cout<<2+(n-2*k)<<endl;
        return true;

}

bool  odd(int n, int k){
	int rem=n-k;
	if(rem<0) return false;
	if(rem%2==1) return false;
	cout<<"yes"<<endl;
	fl(0, k-1){
		cout<<1<<" ";
	}
	cout<<1+rem<<endl;
	return true;
}

void test(){
	int n, k; cin>>n>>k;
	// if(n==k){
	// 	cout<<"yes"<<endl;
	// 	c
	// 	return;
	// }
	if(n%2==1 && k%2==0){
		cout<<"no"<<endl;
		return;
	}
	if(odd(n, k) || even(n, k))
	return;
        cout<<"no"<<endl;

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


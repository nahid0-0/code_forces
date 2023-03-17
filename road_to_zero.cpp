#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll        long long
#define fl(s, e)      for(int i=s; i<e; ++i)         
#define vecint   vector< int > 
#define str      string
#define arrin  fl(0, n){ cin>>arr[i];}
#define arrout fl(0, n){ cout<<arr[i]<<" ";} cout<<endl;



void test(){
	ll int x, y, a, b;
	cin>>x>>y;
	cin>>a>>b;
	if(x<0 && y<0){
		x=abs(x);
		y=abs(y);
        cout<<min(a*(max(x,y)-min(x,y))+b*(min(x,y)),(x+y)*a)<<endl;
		return;

	}
	if(y<0 || x<0){
		cout<<abs(min(x,y)*a)+max(x,y)*a<<endl;
		return;
	}
	cout<<min(a*(max(x,y)-min(x,y))+b*(min(x,y)),(x+y)*a)<<endl;
	return;

	
}
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
        	test();
        }
     
        return 0;
}


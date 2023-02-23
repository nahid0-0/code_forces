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
	int n;
	cin>>n;
	vector<int> vec;
	fl(0, n){
		char x;
		cin>>x;
		x=='(' ? vec.push_back(1) : vec.push_back(-1);
	}
	int sum=0, ans=0;
	fl(0, n){
		sum+=vec[i];
		if(sum<0){
			ans++;
			sum=0;
		}
	}
	cout<<ans<<endl;

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


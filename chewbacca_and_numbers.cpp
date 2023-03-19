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



int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        ll n;
        cin>>n;
        vector<int> ans;
        while(n>0){
            int x=n%10;
        	if(x>4){
        		x=9-x;
        	}
        	n=n/10;
        	ans.push_back(x);
        }
        if(ans[ans.size()-1]==0) ans[ans.size()-1]=9;
        for(int i=ans.size()-1; i>=0; i--){
        	cout<<ans[i];
        }
        cout<<endl;

        return 0;
}


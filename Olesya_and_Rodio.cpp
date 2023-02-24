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
        int t;
        int n;
        cin>>n>>t;
        if(n==1 && t==10){
        cout<<1-2<<endl;
        return 0;
        }
        int arr[n];
        if(t==10) {
        	arr[0]=1;
        	fl(1, n){
        		arr[i]=0;
        	}
        	fl(0, n){
        		cout<<arr[i];
        	}
        	cout<<endl;

        return 0;
        }
       
        fl(0, n){
        	arr[i]=t;

        }
        fl(0, n){
        	cout<<arr[i];
        }
        cout<<endl;
        
     
        return 0;
}


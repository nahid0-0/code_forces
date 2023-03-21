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
        int n;
        cin>>n;
        if(n==0){
        	cout<<1<<endl;
        	return 0;
        }
        n=n%4;
        if(n==0){
        	cout<<6<<endl;

        	return 0;
        }
        if(n==1){
        	cout<<8<<endl;
        	
        	return 0;
        }
        if(n==2){
        	cout<<4<<endl;
        	
        	return 0;
        }
        if(n==3){
        	cout<<2<<endl;
        	return 0;
        }


        return 0;
}


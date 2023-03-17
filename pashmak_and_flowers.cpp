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
        ll int n; cin>>n;
        ll int arr[n];
        ll int x = INT_MAX, y = INT_MIN;
        ll int c1=0, c2=0;


        for(ll int i=0; i<n; i++){
        	cin>>arr[i];
        	if(arr[i]<x) x=arr[i];
        	if(arr[i]>y) y=arr[i];
        }
        for(ll int i=0; i<n; i++){
        	if(arr[i]==x) c1++;
        	if(arr[i]==y) c2++;
        }
        x==y ? cout<<y-x<<" "<<(n-1)*n/2<<endl : cout<<y-x<<" "<<c1*c2<<endl;
      
     
        return 0;
}


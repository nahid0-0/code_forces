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
        int arr[n];
        int count=0;
        fl(0,n){
        	cin>>arr[i];
        	count+=arr[i];
        	if(arr[i]==0) arr[i]=1;
        	else arr[i]=-1;

        }
        if(count==n){
        	cout<<count-1<<endl;
        	return 0;
        }
        // cout<<count<<endl;
        // arrout;
        int sum=0, fsum=0;
        fl(0, n){
        	sum+=arr[i];
        	if(sum>=fsum){
        		fsum=sum;
        	}
        	if(sum<0) sum=0;
        }
        cout<<fsum+count<<endl;


        
     
        return 0;
}


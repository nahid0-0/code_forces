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

int arr[100000];
int brr[100000+2];
bool bl[1000000];


int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #endif
        int n, m;
        cin>>n>>m;
        arr[n+2];
        fl(1, n+1){
        	cin>>arr[i];
        }
        for(int i=n; i>0; i--){
        	if(bl[arr[i]]==0){
        		
        		brr[i]++;
        		bl[arr[i]]=1;
        		// cout<<bl[arr[i]]<<endl;
        	}
        }
        for(int i=n; i>=0; i--){
        	brr[i]=brr[i]+brr[i+1];

        }
        // for(int i=0; i<=n; i++){
        // 	cout<<brr[i]<<" ";
        // }
        // cout<<endl;
        int x;
        while(m--){
        	cin>>x;
        	cout<<brr[x]<<endl;
        }


        
     
        return 0;
}


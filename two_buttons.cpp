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
        int a, x, count=0;
        cin>>a>>x;
        
        while(x>a){
        	if(x%2==1){
        		x=x+1;
        		count++;
        	}
        	x=x/2;
        	count++;
        }
        cout<<a-x+count<<endl;

        
     
        return 0;
}


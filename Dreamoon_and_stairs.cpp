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
        int n, m, move;
        cin>>n>>m;
        move=n/2;
        if(n%2!=0) ++move;
        fl(move, n+1){
        	if(i%m==0) {
        		cout<<i<<endl;
        		return 0;
        	}
        }
        cout<<-1<<endl;

        return 0;
}


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
        int arr1[n], arr2[n-1], arr3[n-2];
        int sum1=0, sum2=0, sum3=0;
        fl(0, n){
        	cin>>arr1[i];
        	sum1+=arr1[i];
        }
        fl(0, n-1){
        	cin>>arr2[i];
        	sum2 += arr2[i];
        }
        fl(0, n-2){
        	cin>>arr3[i];
        	sum3 += arr3[i];
        }
        // fl(0, n){
        // 	cout<<arr1[i]<<" ";
        // }
        // cout<<endl;
        // fl(0, n-1){
        // 	cout<<arr2[i]<<" ";
        // }
        // cout<<endl;
        // fl(0, n-2){
        // 	cout<<arr3[i]<<" ";
        // }
        cout<<sum1-sum2<<" "<<sum2-sum3<<endl;

     
        return 0;
}


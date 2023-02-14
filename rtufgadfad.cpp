#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool arreq(int n, int arr[], int ans[]){
        for(int i=0; i<n; i++){
                if(arr[i]!=ans[i])
                        return 0;
        }
        return 1;
}
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        int n;
        cin>>n;
        int arr[n];
        int ans[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
                ans[i]=arr[i];
        }
        // if(arreq(n,arr,ans)){
        //         cout<<"yes"<<endl;
        //         cout<<arr[0]<<" "<<arr[0]<<endl;
        //         return 0;
        // }
        // for(int i = 0; i<n; i++){
        //         for(int j = i+1; j<n; ++j){
        //                 swap(arr[i],arr[j]);
        //                 if(arreq(n,arr,ans)){
        //                         cout<<"yes"<<endl;

        //                         cout<<i+1<<" "<<j+1<<endl;
        //                         return 0;
        //                 }
        //                 else 
        //                 swap(arr[i],arr[j]);
        //         }
        // }
        //  for(int i=0; i<n; i++){
        //         cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        sort(arr,arr+n);
        int l=0, r=0, i=0;
        bool p=true;
        while(i<n){
                if(ans[i]<ans[i+1] && p==true) {
                        i++;
                        
            }
                else {
                        l=r=i;
                        while(ans[i]>ans[i+1] && i<n){
                              
                                r++;
                                // cout<<r<<endl;
                                i++;
                        }
                          // cout<<i<<" "<<r<<endl;

                }
                // cout<<r<<endl;
                sort(ans+l, ans+r);

                p=false;

        }
        // cout<<r<<endl;
        // for(int i=0; i<n; i++){
        //         cout<<ans[i]<<" ";
        // }
        // cout<<endl;

        // cout<<arreq(n, arr, ans)<<endl;
        arreq(n,arr,ans) ? cout<<"yes"<<endl<<l+1<<" "<<r<<endl : cout<<"no"<<endl;
        
        return 0;
}
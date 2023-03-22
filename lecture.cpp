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
        int n, m;
        cin>>n>>m;
        pair<string, string> pr;
        vector<pair<string, string> > vec;
        for(int i=0; i<m; i++){
                string s;
                cin>>s;
                pr.first=s;
                string s2;
                cin>>s2;
                pr.second=s2;
                vec.push_back(pr);
        }
        for(int i=0; i<n; i++){
                string s;
                cin>>s;
                for(int j=0; j<m; j++){
                        if(s==vec[j].first){
                                int l=vec[j].second.length();
                                if(l<s.length()) cout<<vec[j].second<<" ";
                                else cout<<s<<" ";
                                
                        }
                }
        }
        cout<<endl;
     
        return 0;
}


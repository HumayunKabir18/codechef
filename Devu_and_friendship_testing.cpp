#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int ar[s];
        int f=s;
        for(int i=0;i<s;i++){
            cin>>ar[i];
        }
        sort(ar,ar+s);
        for(int i=0;i<s-1;i++){
               if(ar[i]==ar[i+1]){
                f--;
               }

        }
       cout<<f<<endl;
    }
     return 0;
}

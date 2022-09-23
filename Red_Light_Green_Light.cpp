#include<iostream>
using namespace std;


int main(){
    int t,p,a,i,j,s;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>p>>a;
        s=0;
        int h[p];
        for(j=0;j<p;j++){
            cin>>h[j];
            if (h[j]>a){
                s+=1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
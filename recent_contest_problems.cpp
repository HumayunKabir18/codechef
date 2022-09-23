#include<iostream>
#include<string>
using namespace std;



int main(){
    int t,i,j,x,s,l;
    
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>x;
        string str[x];
        s=0;
        l=0;
        for(j=0;j<x;j++){
            cin>>str[j];
            if (str[j]=="START38"){
                s+=1;
            }
            else if(str[j]=="LTIME108"){
                l+=1;
            }
        }
        cout<<s<<" "<<l<<endl;    
    }
}
#include<iostream>
#include<cstring>
using namespace std;


int main(){
    int t;
    cin>>t;
    for (int i=1;i<=t;i++){
        int a;
        int c=0;
        cin>>a;
        string s;
        cin>>s;
    for(int j=0;j<a;j++){   
      if(s[j]=='0' || s[j]=='5'){
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"No\n";
    }
    else{
        cout<<"YES\n";
    }
    }
    return 0;
}

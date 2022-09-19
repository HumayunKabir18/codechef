#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string a,s;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>s;
        for(int i=0;i<5;i++){
            if(a[i]==s[i]){
                cout<<'G';
            }
            else{
                cout<<'B';
            }
        }
        cout<<endl;
    }
    
    return 0;
}
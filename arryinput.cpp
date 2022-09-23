#include<iostream>
#include<string>
using namespace std;

int main(){
    int t,i;
    cin>>t;
    string str[t];
    for(i=0;i<t;i++){
        cin>>str[i];
    }
    for(i=0;i<t;i++){
        cout<<str[i];
    }
    cout<<endl;
}
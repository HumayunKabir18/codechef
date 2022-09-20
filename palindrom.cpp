#include<iostream>
#include<cstring>
using namespace std;



 string palin(string t){
        int count=0;
        int k=t.length();
        for(int i=0;i<k/2;i++){
            if(t[i]==t[k-i-1]){
                count++;
            } 
        }
        if(count==k/2){
            return "wins";
        }

            return "loses";
    }



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<< palin(s)<<endl;
    }
    return 0;
}
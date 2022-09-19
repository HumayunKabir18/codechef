#include<iostream>
using namespace std;

int main(){
    int t,f,l,x,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>f>>l;
        x=0;
        for(j=f; j<=l;j++){
            if((j<=9)&&(j==2||j==3||j==9)){
                x++;
            }
            else if(j%10==2||j%10==3||j%10==9){
                x++;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
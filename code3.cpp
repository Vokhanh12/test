#include<iostream>
using namespace std;

int Results(int n){
    int results=0;
    while(n!=0){
        n=n/2;
        results++;
    }

    return results;
}
int main(){
    const int n=16;
    int m=n;
    int Array_BIT[Results(n)-1];
    //Put the Numbers in the Array
    for(int i=0;i<=Results(n)-1;i++){
        Array_BIT[i]=m%2;
        m=n/2;
    }

    for(int i:Array_BIT){
        if(i==1){
            cout<<"ERRO";
            break;
        }
        
    }

    return 0;
}
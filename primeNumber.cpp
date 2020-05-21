#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number to check it is a prime number or not: \n";
    cin>>n;
    int m=n/2;
    for(int i=2; i<=m; i++){
        if(n%i==0){
            cout<<"not prime";
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<"prime";
    }
    return 0;
}

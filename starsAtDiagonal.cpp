#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    cout<<'\n';
    for (int i=1; i<=n;i++){
        for(int j=n; j>=1; j--){
            if(i==j){
                cout<<" * ";
            }
            else{
                cout<<j<<" "; //remove j to print only stars not the numbers.
            }
        }
        cout<<"\n";
    }

}
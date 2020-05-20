#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of vector array: ";
    cin>>n;
    vector<int> takeit(n);
    for (int i=0; i<takeit.size();i++){
        cin>>takeit[i];
    }
    sort(takeit.begin(), takeit.end());
    cout<<"Smallest element of vector array: "<<takeit.front()<<"\n";
    cout<<"Greatest element of vector array: "<<takeit.back();



}
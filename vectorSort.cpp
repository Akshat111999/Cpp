#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

void print(vector<int> v1){
    for (int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    
}

int main(){
    vector<int> v1(4);
    v1[0]=8;
    v1[1]=4;
    v1[2]=2;
    v1[3]=6;
    cout<<"before sort\n";
    print(v1);
    cout<<"\nafter sorting, Ascending\n";
    sort(v1.begin(), v1.end());
    print(v1);
    cout<<"\nafter sorting, Descending\n";
    sort(v1.begin(), v1.end(),greater<int>());
    print(v1);
    return 0;
}
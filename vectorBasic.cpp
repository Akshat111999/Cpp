#include<iostream>
#include <vector>
using namespace std;

void print(vector<int> v1){
    for (int i=0; i<v1.size(); i++){
        cout<<v1[i]<<"\n";
    }
    cout<<v1.front()<<" is at first position\n"; //print first element
    cout<<v1.back()<<" is at last position\n";  //print last element
    cout<<v1.at(3)<<" is at index position 3\n"; //here 3 specifies the index position

}

int main(){
    vector<int> v1(4);
    v1[0]=2;
    v1[1]=4;
    v1[2]=6;
    v1[3]=8;
    print(v1);
    return 0;
}

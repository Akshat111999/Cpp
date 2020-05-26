#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n,f,found =0,pos;
    cout<<"enter size of the array: ";
    cin>>n;
    vector<int> all(n);
    cout<<"enter elements in array: \n";
    for(int i=0; i<n; i++)
    {
        cin>>all[i];
    }
    cout<<"enter element you want to find: ";
    cin>>f;

    if(find(all.begin(), all.end(), f)!=all.end()){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
	

}
   

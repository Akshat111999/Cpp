#include<iostream>
using namespace std;
int main(){
    int arr[100], freq[100], i,j,n,count=0;
    cout<<"enter no of elements\n";
    cin>>n;
    cout<<"enter the elements in array\n";
    for (i=0; i<n;i++){
        cin>>arr[i];
    }
    for (i=0;i<n;i++){
        count=1;
        if (arr[i]!=-1){
            for (j=i+1; j<n; j++){
                if (arr[i]==arr[j]){
                    count++;
                    arr[j]=-1; //to replace the number which gets visited.
                }
            }
            freq[i]=count;
        }
    }
    for(i=0; i<n; i++){
        if (arr[i]!=-1){
            cout<<"\nfrequency of element "<<arr[i]<<" is "<<freq[i];
        }
    }
    return 0;
}

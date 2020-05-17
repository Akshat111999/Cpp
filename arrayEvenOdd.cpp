#include<iostream>
int main(){
    int arr[]={2,4,5,5,8,2,3,4,7};
    int i;
    int length= sizeof(arr)/sizeof(arr[0]);
    std::cout<<"even index elements: ";
    for(i=0;i<length;i++){
        
        if (i%2==0){
            std::cout<<arr[i]<<" ";
        }
    }
    std::cout<<"\nodd index elements: ";
    for(i=0;i<length;i++){
        
        if(i%2!=0){
            std::cout<<arr[i]<<" ";
        }
    }
}

#include<iostream>
int main(){
	int arr[5]={3,2,6,7,5};
	int max=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	std::cout<<max;	
}

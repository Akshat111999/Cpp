#include<iostream>
int main(){
	int arr[]={1,2,1,3,2,5,4,7,1,2,4,5};
	for(int i=0; i<sizeof(arr)/4;i++){
		int count=0;
		for(int j=0; j<sizeof(arr)/4;j++){
			if(arr[i]==arr[j]){
				count=count+1;
			}
		}
		std::cout<<i<<" is occuring "<<count<<" times."<<std::endl;
	}
}

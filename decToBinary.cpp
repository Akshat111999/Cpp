#include <iostream>
int main(){
	int num=8,quotient=0,i=0,binary[13];
	do{
		binary[i]=num%2;
		num= int(num/2);
		i++;
	}
	while(num!=0);   //	while(num!=1);
	for(i=i-1;i>=0;i--){
		std::cout<<binary[i];	
	}
//	for(i=0;num>0;i++){
//		binary[i]=num%2;
//		num= int(num/2);
//	}
}

#include <stdio.h>

void printout(int array[],int n){
	for (int i = 0;i<n;i++){
		printf("%d ",array[i]); 
	} 
} 
int main(){
	int n =10; 
	int array[n];
	for (int i;i<n;i++){
		printf("Nhap phan tu cho array[%d]",i);
		scanf("%d",&array[i]); 
	} 
	printout(array,n);
	return 0; 
} 

#include <stdio.h>

int maxnum(int array[],int max, int n){
	for (int i=0;i<n;i++){
		if (max < array[i]){
			max = array[i]; 
		} 
	} 
	return max; 
} 

int main(){
	int n =10; 
	int array[n];
	int max= array[0] ;
	for (int i;i<n;i++){
		printf("Nhap phan tu cho array[%d] ",i);
		scanf("%d",&array[i]); 
	} 
	printf("Phan tu co gia tri lon nhat trong mang la %d",maxnum(array,max,n)) ;
} 

#include <stdio.h>

int sum(int n, int m){
	int tong = n + m;
	return tong; 
} 
int main(){
	int a,b;
	printf("Nhap gia tri cho a : ");
	scanf("%d",&a);
	printf("Nhap gia tri cho b : ");
	scanf("%d",&b);
	
	printf("Tong 2 phan tu a,b la %d",sum(a,b)); 
	return 0; 
} 

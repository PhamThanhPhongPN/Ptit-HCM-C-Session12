#include <stdio.h>

int giaithua(int n,int m=1){
	for (int i = n;i>0;i--){
		m *=i; 
	}
	return m; 
} 
int main(){
	int n,m=1;
	printf("Nhap mot so nguyen duong : ");
	scanf("%d",&n);
	printf("Giai thua cua %d là %d",n,giaithua(n,m)) ;
	return 0; 
} 

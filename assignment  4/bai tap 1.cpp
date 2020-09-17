#include <stdio.h>
int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	int S=0;
	for (int i=0;i<=n;i++){
		S+=i;
	}
	printf("Tong cac so tu 1 den n la: %d",S);
	
	
}

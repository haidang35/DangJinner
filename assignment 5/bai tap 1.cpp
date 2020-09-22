#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	printf("Cac so chan be hon n la: ");
	for (int i=0;i<n;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
}

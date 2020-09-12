#include <stdio.h>

int main(){
	
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	if(n>=2){
		if(n<=7){
			printf("Day la thu %d",n);
		} else{
			if (n==8){
				printf("Day la chu nhat");
			}else{
				printf(" n khong phai la cac ngay trong tuan");
			}
		}
	}else{
		printf(" n khong phai la cac ngay trong tuan");
	}
}

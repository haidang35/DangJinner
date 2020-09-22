#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int S=0;
	for (int i=1;i<=n;i++){
		
		if(n%i==0){
			S=S+i;
		}
		
	}
	printf("Tong cac uoc cua %d = %d ",n,S);
	
	
}

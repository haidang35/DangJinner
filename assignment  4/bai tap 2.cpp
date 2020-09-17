#include <stdio.h>

int main(){
	int n;
	printf("nhap so n= ");
	scanf("%d",&n);
	double s=0;	 
	
	for (int i=1; i<=n; i++){
		s=s+(double)1/i;		
	}

	printf("Tong cua S=1+1/2+...+1/n= %lf", s);
}

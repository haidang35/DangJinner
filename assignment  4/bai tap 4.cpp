#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	do {
		printf("Nhap do dai canh a: ");
		scanf("%d",&a);
		printf("Nhap do dai canh b: ");
		scanf("%d",&b);
		printf("Nhap do dai canh c: ");
		scanf("%d",&c);
	}while((a+b)<c && (a+c)<b && (b+c)<c);
	int C;
	float S,p;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	C=a+b+c;
	printf("Dien tich tam giac la: %f\n",S);
	printf("Chu vi tam giac la: %d",C);
	
}

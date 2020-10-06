#include <stdio.h>
#include <math.h>

int perimeter(int a, int b, int c){
	int C;
	C=a+b+c;
	
	return C;
}
double area(int a, int b, int c){
	double S,p;
	p=(double)(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	
	return S;
}

int main(){
	int a,b,c;
	printf("Nhap do dai canh a=");
	scanf("%d",&a);
	printf("Nhap do dai canh b=");
	scanf("%d",&b);
	printf("Nhap do dai canh c=");
	scanf("%d",&c);
	if(a<=0 || b<=0 || c<=0 || (a+b)<=c || (a+c)<=b || (b+c)<=a){
		printf("Du lieu nhap vao khong hop le");
	}else if(a>0 && b>0 && c>0 && (a+b)>c && (a+c)>b && (b+c)>a){
	   	printf("Chu vi cua tam giac la: %d\n",perimeter(a,b,c));
	    printf("Dien tich tam giac la: %lf\n",area(a,b,c));	
	}
		
}

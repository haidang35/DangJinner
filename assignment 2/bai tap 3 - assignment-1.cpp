#include <stdio.h>
#include <math.h>

int main(){
	
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("nhap c=");
	scanf("%d",&c);
	
	int chuvi;
	float p,s;
	if((a+b)>c){
		if((a+c)>b){
			if ((b+c)>a){
			   p=(a+b+c)/2;
			   s=sqrt(p*(p-a)*(p-b)*(p-c));
			   chuvi=a+b+c;
			   printf("a,b,c la 3 canh cua mot tam giac \n");
			   printf("dien tich tam giac la:%f \n ",s);
			   printf("chu vi tam giac la: %d \n",chuvi);	
			} else{
				printf("a,b,c khong phai la 3 canh cua mot tam giac");
			}
		} else{
			printf("a,b,c khong phai la 3 canh cua mot tam giac");
		}
		
	}else{
		printf("a,b,c khong phai la 3 canh cua mot tam giac");
	}
	
	
	
}

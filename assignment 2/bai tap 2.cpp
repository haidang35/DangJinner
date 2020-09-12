#include <stdio.h>
#include <math.h>

int main(){
	
	int a;
	printf("nhap a=");
	scanf("%d",&a);
		
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	if(a>=b){
		printf("a/b=%d",(a/b));
	}else{
		printf("a*b=%d",(a*b));
	}
}

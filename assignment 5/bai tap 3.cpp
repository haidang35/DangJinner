#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a= ");
	scanf("%d",&a);
	printf("Nhap so b= ");
	scanf("%d",&b);
	int i=1;
	int max=0;
	while(i<=a && i<=b){
		if(a%i==0 && b%i==0){
			if(i>max){
				max=i;
				
			}
		}
		i++;
	}
	printf("Uoc chung lon nhat cua a va b la %d",max);
	
	
	
}

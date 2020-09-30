#include <stdio.h>

int UCLN(int a, int b){
	
	int max=1;
	for(int i=1;i<=a;i++){		
		if(a%i==0 && b%i==0){
			if (i>max){
				max=i;
			}
		}
	}
	return max;
}

int main(){
	int x,y;
	printf("Nhap x=");
	scanf("%d",&x);
	printf("Nhap y=");
	scanf("%d",&y);
	printf("Uoc chung lon nhat cua hai so la: %d",UCLN(x,y));
	
	
}

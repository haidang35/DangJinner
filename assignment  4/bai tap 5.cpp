#include <stdio.h>
int main(){
	int n;
	printf("nhap so tu nhien n:");
	scanf("%d",&n);
	if(n>1){
		if (n==2){
		        printf("So %d la so nguyen to",n);
				
		}else{
		for (int i=2;i<n;i++){
		
			if(n%n==0 && n%i!=0 ){
		
				printf("So %d la so nguyen to",n);
				break;           
			}else{
				printf("So %d khong phai la so nguyen to",n);
				break;
			}
			
		}
	  }	
	}else{
	
		printf("So %d khong phai la so nguyen to",n);
	}
}

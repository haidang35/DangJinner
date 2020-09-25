#include <stdio.h>
int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	int a[n];
	for (int i=1;i<=n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
		
	}

	int max=0;
	for(int i=1;i<=n;i++){
		if(a[i]%2!=0 && max<i){
			max=i;	
	   }
	}
	for(int i=1;i<=n;i++){
		if(a[i]%2!=0 && i==max){
			
			printf("So le cuoi cung cua mang la: %d",a[i]);
			break;
		   
		}
	}
	
}

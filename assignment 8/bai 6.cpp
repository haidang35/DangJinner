#include <stdio.h>

void BCNN(int a, int b){
	int count1=0;
	int count2=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			count1+=1;
		}	
	}
	for(int j=1;j<=b;j++){
		if(b%j==0){
			count2+=1;
		}
	}
	if( count1==2 && count2==2){
		printf("BCNN cua %d va %d la: %d",a,b,a*b);
	}
	if(a%b==0){
		printf("BCNN cua %d va %d la: %d",a,b,a);
	}else if(b%a==0){
		printf("BCNN cua %d va %d la: %d",a,b,b);
	}else{
		for(int k=1;;k++){
		int max=a;
	    if(b>a){
		max=b;
	    }
		if((max*k)%a==0){
			printf("BCNN cua %d va %d la: %d",a,b,max*k);
			break;
		}
	}
	}		
}

int main(){
	int x,y;
	printf("Nhap x=");
	scanf("%d",&x);
	printf("Nhap y=");
	scanf("%d",&y);
	BCNN(x,y);
	
}

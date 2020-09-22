#include <stdio.h>
int main(){
    int a,b;
    do{
    	printf("nhap so a= ");
    	scanf("%d",&a);
    	printf("nhap so b= ");
    	scanf("%d",&b);
	} while (a>b);
     
      for(int i=a;i<=b;i++){
     	int count=0;
     	for(int j=1;j<=i;j++){
		   if(i%j==0){
		     count+=1;
		   }
		 
		 }
		 if(count==2){
		   printf("%d ",i);
		 }
	    
	   
	 }


}

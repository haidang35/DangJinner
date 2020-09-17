#include <stdio.h>
int main(){
	
	int S=0;
	int count=0;
	for(int i=0; ;i++){
		if(i%2!=0){
			count=count+1;
			S+=i;
		    if (count==100){
		    	break;
			}
		}
	
	}
	
	printf("Tong 100 so le dau tien la: %d",S);
}

#include <stdio.h>
#include <string.h>
int main(){
	
	char s1[30];
	char s2[20];
	printf("Nhap chuoi s1: ");
	scanf("%s",s1);
	printf("Nhap chuoi s2: ");
	scanf("%s",s2);
    
    int count=0;
    for(int i=0;i<strlen(s2);i++){
    	for(int j=0;j<strlen(s1);j++){
    		if(s2[i]==s1[j]){
    			count++;
    			
    			
			}
    		
    		
		}
	}
    if(count>=strlen(s2) && count<=strlen(s1)){
    	printf("s2 nam trong s1");
	}else{
		printf("s2 khong nam trong s1");
	}
}

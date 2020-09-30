#include <stdio.h>

void nguyento(int n){
      if(n<2){
      	printf("So nguyen to gan %d la 2  ",n);
      	
	  }else if(n<3){
	  	printf("So nguyen to gan %d la 3",n);
	  	
	  }else if(n>=3){
	  	
	 
	  	for(int i=4;;i++){
	  		int count=0;
	  		for(int j=1;j<=i;j++){
	  			if(i%j==0){
	  				count+=1;
				  }	  			
			  }
			  if(count==2 && i>n){
			  	printf("So nguyen to gan %d nhat la : %d",n,i);
			  	break;
			  	
			  }
		  }
	  }	  
}


int main(){
   
  int x;
  printf("Nhap x=");
  scanf("%d",&x);
  nguyento(x);


}

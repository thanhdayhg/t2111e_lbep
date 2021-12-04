#include <stdio.h>
 
int main(){
    int a;
	printf("so nguyen =");
    scanf("%d",&a);
    
	int b = 0;
    while(a>0){
    	b = b * 10 + a % 10;
    	a = a / 10 ;
	}
	printf("so dao nguoc = %d",b);

}
    	
   

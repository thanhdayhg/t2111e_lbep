#include <stdio.h>
int main(){
	
	// input A,B
	int A,B;
	printf("Nhap A=");
	scanf("%d",&A);
	printf("Nhap B=");
	scanf("%d",B);
	
	// so sanh A > B
	if(A>B){
	    // yes
		printf("so lon hon: %d",A);
    }else{
		// No
		printf("so lon hon: %d",B);
	}
}	

#include <stdio.h>

int main() {
	int result=1,number,i;
	
	printf("Type a number : ");
	scanf("%d", &number);
	
	for(i=1; i <= number; i++) {
		
		result = result * i;
		
	}
	
	printf("%d's factorial is %d.", number,result);

	return 0;
}

#include <stdio.h>

int main() {
	
	
	int sonuc=1,sayi,i;
	
	printf("Bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	for(i=1; i <= sayi; i++) {
		
		sonuc = sonuc * i;
		
	}
	
	printf("%d sayisinin faktoriyeli %d'dir.", sayi,sonuc);
	
	
	
	
	return 0;
}

#include <stdio.h>
int main (){
	int n;
	printf("nhap chieu dai cua hinh thoi: ");
	scanf("%d" , &n);
	for ( int i = 1 ; i <= n /2 ; i++) {
		
		
		for ( int j  = (n / 2 )+ 1 ; j > i   ;j--) {
			printf(" ");
		}
		
		for ( int j = 1  ;  j <= 2*i - 1 ; j++ ) {
			printf("*");
		}
		printf("\n");
	}
	
	for ( int i = 1 ; i <= n ; i++)  {
	
	printf("*");
	}
	printf("\n");
	
	for( int i = 1 ; i <= n/2 ; i++) {
		
		for ( int j = 1  ; j  <= i; j++ ) {
			printf(" ");
		}
		
		for ( int j =  n - 2 ;  j >= 2*i -1 ; j-- ) {
			printf("*");
		}
		printf("\n");
	}
}

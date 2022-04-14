#include <stdio.h>
#include <stdlib.h>
void xuat(int a[] , char str[] , int frequency) {
	for ( int i = 0 ; i<26 ; i++) {
		if(a[i] == frequency) 
		printf("%c: %d\n" , str[i] , a[i]);
	}
}
void dem(char s[] , int a[] , char str[]) {
	strlwr(s);
	for ( int i = 0 ; i < strlen(s); i++) {
		for ( int j = 0 ; j < 26 ; j++){
			if( s[i] == str[j]) {
				a[j]++;
			}
		}
	}
//	xuat(a,str);
}

int Max(int a[]) {
	int max = 0 ;
	for ( int i = 0 ; i < 26 ;i++) {
		if ( max < a[i])
		max = a[i];
	} 
	return max;
}
int main() {
	char s[100];
	char str[26];
	int a[26] = {0};
	int max;
	strcpy(str , "abcdefghijklmnopqrstuvxywz");
	printf("nhap vao chuoi: ");
	fgets(s , 100 , stdin);
	dem(s ,a , str);
	int frequency = Max(a);
	xuat(a , str , frequency);
	
}

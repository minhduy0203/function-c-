#include<stdio.h>
#include <stdlib.h>
// tim index dau tien cua chuoi con

int findIndex(char s[] , char sub[]) { // tim vi tri cua chuoi con 
	int flag, count, index;
	
	for ( int i = 0 ;  i < strlen(s) ; i++) {
		
		flag = 0;
		if(s[i] == sub[0]) {
			flag  = 1;
			count  = 0;
			
			for ( int j = i; j < strlen(sub) ;j++ , count++ ) {
				if( s[j] != sub[count]) {
					flag = 0;
					break;
				}
			}
		}
		
		if(flag == 1) {
		index = i;
		break;
	} 
}
	return index;
}


void reverse(char s[] , char sub[] ,int index) {
	int k = 0;
	strrev(sub);
	for ( int j = 0 ; j < strlen(sub) ; j++) {
		s[index] = sub[k];
		index++;	
		k++;
	}
}


int main() {
	int index;
	char s[100];
	char sub[100];
	printf("Nhap vao chuoi: ");
	scanf("%[^\n]" , &s);
	fflush(stdin);
	printf("nhap vao chuoi con: ");
	scanf("%[^\n]" , &sub);

	index = findIndex(s , sub);
	reverse(s,sub, index);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	for ( int i = 0 ;  i < strlen(s) ; i++) {
//		
//		flag = 0;
//		if(s[i] == sub[0]) {
//			flag  = 1;
//			count  = 0;
//			
//			for ( int j = i; j < strlen(sub) ;j++ , count++ ) {
//				if( s[j] != sub[count]) {
//					flag = 0;
//					break;
//				}
//			}
//		}
//		
//		if(flag == 1) {
//		index = i;
//		printf("vi tri index la: %d\n" , i);
//		break;
//	} 
//	
//		
//	}
//	strrev(sub);
//	int k = 0;
//	for ( int j = 0 ; j < strlen(sub) ; j++) {
//		s[index] = sub[k];
//		index++;	
//		k++;
//	}
//	
//	
//	
	
//	printf("chuoi sua khi dao: %c\n" , s[index]);
//	printf("chuoi sua khi dao: %c\n" , sub[0]);
	printf("chuoi sua khi dao: %s" , s);
}

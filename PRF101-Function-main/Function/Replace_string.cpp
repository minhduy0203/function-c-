#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	
    char str[30] = "Good School";
    char sub[20];
    printf("nhap vao chuoi con can tim : ");
    scanf("%[^\n]"  ,sub);
    char * p;
    char* n;
    int j = strlen(sub);
    p = strstr(str, sub);
//    printf("%c" , *p);
    
   n = p+ (j -1); // p + do dai cua ki tu 
//	  printf("%c" , *n);
//	  printf("%d", j / 2);
//	
   for ( int i = 1 ; i<= (j/2); i++) {
   	char temp;
   	temp = *p;
   	*p = *n;
   	*n = temp;
   	p = p+ 1;
   	n = n -1;
   	
   }
   printf("%s" , str);
}
//ood School

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int findString(char s[], char p[], int index[]);
void reverseString(char s[]);
void replaceStringbyStringatIndex(char s1[], char s2[], int index);

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char strto[200];
	char strbe[100];
	char strbe1[100];
	int index[100] = {0}, i;
	scanf("%[^\n]", strto);
	while (getchar() != '\n');
	scanf("%[^\n]", strbe);
	
	strcpy(strbe1, strbe); //strbe1 is a clone of strbe.
	reverseString(strbe);
	
	int count = findString(strto, strbe1, index); 
	
	for (i = 0; i<count; i++){
		replaceStringbyStringatIndex(strto, strbe, index[i]);
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s", strto);

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
int findString(char s[], char p[], int index[]) 		//return index of p in s, if not p return -1;
{
	int i;
	int count = 0;
	int j;
	if (strlen(s) < strlen(p)) return -1;
	for (i = 0; i<= strlen(s) - strlen(p) ; i++){
		bool check = true;
		for (j = 0; j < strlen(p); j++){
			if (p[j] != s[i+j]) {
				check = false;
			}
		}
		if (check) {
			index[count] = i;
			count++;
		}
	}	
	return count;
}
void reverseString(char s[]){
	int i;
	for (i = 0; i<strlen(s)/2; i++){
		char tg = s[i];
		s[i] = s[strlen(s) - i-1];
		s[strlen(s) - i -1] = tg;
	}
}
void replaceStringbyStringatIndex(char s1[], char s2[], int index){ //insert s2 at index of s1.
	int i = 0;
	for (i = 0; i <= strlen(s2) - 1;i++){
		s1[index + i] = s2[i];
	}
}

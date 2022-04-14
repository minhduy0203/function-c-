#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void doiSangNhiPhan(int n) {
	char du[100];
	int count = 0; // dem so luong so du
	// dung vong while 
	while (n > 0) {
		int x = n % 2; // n chia 2 -> luu so du vao x.
		if (x == 1) {
			du[count] = '1';
		} else {
			du[count] = '0';
		}
		count++;
		// chia n cho 2
		n = n / 2;
	}
	int i;
	for (i = count - 1; i >= 0;i--) {
		printf("%c", du[i]);
	}
}


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a,b;
	scanf("%d%d",&a,&b);


	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	char s1[100] = "hello";
	char s2[100] = "hello";
	
	printf("%s ",s1);
	printf("%s",s2);

	return 0;
}


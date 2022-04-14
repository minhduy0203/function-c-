#include <stdio.h>
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InterchangeSort(int a[], int n){	
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
	        if(a[i] > a[j])  //n?u có ngh?ch th? thì d?i ch?
		        Swap(&a[i], &a[j]);
}



int main (){
int a[20];
int b[20];
int c[20];
int n  = 6;
for ( int i = 0 ; i < n ; i++) {
	c[i] = 0;
}



for ( int i = 0 ; i < n ; i++) {
	scanf("%d" , &a[i]);
}


InterchangeSort(a,n);
//for ( int i = 0 ; i < n ; i++) {
//	printf("%d " , a[i]);
//} 


int i = 0, max = 0,index = 0 , j = 0;
	int frequency;
	while(i < n)	{
 
		frequency = 1;
 
		while(a[i] == a[i+1])	{
 
			frequency++;
			i++;
		}
 
		b[j] = a[i];
		c[j] = frequency;
		j++;
		i++;
	
	}

for ( int k = 0 ; k < j ; k++) {
	if ( c[k] > max){
	max = c[k];
	index = k;
}
}
//printf("%d-%d" , b[index] , max);

for ( int k = 0 ; k < j ; k++) {
	if ( c[k] == max)
	printf("%d ", b[k]);
}

printf("\n");
return 0;
}

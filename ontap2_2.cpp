#include <stdio.h>
int main (){
	int N;
	printf ("Nhap so N = \n");
	scanf("%d", &N);
	float n = 1;
	for(int i=1; i<=N;i++){
		n = n * i;
	}
	printf ("n = %f\n", n);
	return 0;
}

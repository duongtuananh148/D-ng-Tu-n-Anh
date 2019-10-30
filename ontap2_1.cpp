#include <stdio.h>
int main (){
	int N;
	printf ("Nhap so N\n");
	scanf("%d", &N);
	float S = 0;
	for(int i=1; i<=N;i++){
		S = S + (float)1/i;
	}
	printf ("S = %f\n", S);
	return 0;
}

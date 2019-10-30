#include <stdio.h>
int main (){
	int ary [10];
	for (int i = 0; i < 10; i++){
		printf ("Nhap phan tu thu %d\n", i);
		scanf ("%d", &ary[i]);
	}
	float S=0;
	float T=0;
	for (int i = 0; i < 10; i++){
	S += ary[i];
	T = S/10;
	}
	printf ("Trung binh %f\n", T);
	return 0;
}

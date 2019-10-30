#include <stdio.h>
int main (){
	int n;
	printf ("Nhap n: ");
	scanf ("%d", &n);
	int ary[n];
	for (int i=0; i<n; i++){
		printf ("Nhap phan tu thu %d\n", i);
		scanf ("%d", &ary[i]);
	}
	int min=0;
	for (int i=0; i<n; i++){
		if (ary[i]>0){
			min = ary[i];
			break;
		}
	}
	for (int i=0; i<n; i++){
		if (min > ary[i] && ary[i]>0){
			min = ary[i];
		}
	}
	if (min!=0){
		printf ("So duong nho nhat = %d\n", min);
	}
	return 0;
}

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
	int tong=0;
	for (int i=0, S=0; i<n; i++){
		if (ary[i]>0){
			S+=ary[i];
		}else{
			S=0;
		}
		if (S>tong){
			tong=S;
		}
	}
	printf ("Chuoi so duong co tong lon nhat = %d\n", tong);
	return 0;
}

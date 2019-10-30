#include <stdio.h>
void nhapmang (int ary[], int n){
	for (int i = 0; i < n; i++){
		printf ("Nhap ary [%d]= ", i);
		scanf ("%d", &ary[i]);
	}
}
void insole (int ary[], int n){
	printf ("Cac so le trong mang: ");
	for (int i=0; i<n; i++){
		if (ary[i]%2!=0){
			printf ("%d ", ary[i]);
		}
	}
}
int main (){
	int n; 
	printf("Nhap n: ");
	scanf ("%d", &n);
	int ary[n];
	nhapmang (ary, n);
	insole (ary, n);
	return 0;
}

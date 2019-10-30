#include <stdio.h>
void nhapmang (int ary[], int n){
	for (int i = 0; i < n; i++){
		printf ("Nhap ary [%d]= ", i);
		scanf ("%d", &ary[i]);
	}
}
void timsotrongmang (int ary[], int n, int x){
	int i;
	for (i=0; i<n; i++){
		if (x==ary[i]){
			break;
		}
	}
	if (i<n){
		printf ("%d tim thay tai vi tri %d\n", x, i);
	}else {
		printf ("Khong tim thay %d trong mang\n", x);
	}
}
int main (){
	int n;
	printf("Nhap vao so : ");
	scanf("%d", &n);
	int ary [n];
	nhapmang (ary, n);
	int x;
	printf ("\nNhap vao gia tri x: ");
	scanf ("%d", &x);
	timsotrongmang(ary, n, x);
	return 0;
}

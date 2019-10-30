#include <stdio.h>
int main (){
	int n;
	printf("Nhap vao so : ");
	scanf("%d", &n);
	int ary [n];
	for (int i = 0; i < n; i++){
		printf ("Nhap phan tu thu %d = ", i);
		scanf ("%d", &ary[i]);
	}
	int x, i;
	printf ("\nNhap gia tri x : ");
	scanf ("%d", &x);
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
	return 0;
}

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
	for (int i=0, dem=0; i<n; i++){
		if (ary[i]>0){
			dem++;
		}else{
			dem=0;
		}
		if (dem>tong){
			tong=dem;
		}
	}
	printf ("So luong cac so duong lien tiep nhieu nhat = %d\n", tong);
	return 0;
}

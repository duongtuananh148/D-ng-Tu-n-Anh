#include <stdio.h>
int main (){
	int n;
	printf("Nhap vao so : ");
	scanf("%d", &n);
	int ary [n];
	for (int i = 0; i < n; i++){
		printf ("Nhap phan tu thu %d\n", i);
		scanf ("%d", &ary[i]);
	}
	int x;
	for (int i=n-1; i>=0; i--){
		if(ary[i]%2!=0){
			x = ary[i];
			break;
		}
	}
	printf("So le cuoi cung cua mang = %d\n", x);
	return 0;
}

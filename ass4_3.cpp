#include <stdio.h>
int main(){
	int x1, x2, x3;
	int n;
	printf ("Nhap so thu tu muon tim\n");
	scanf ("%d", &n);
	x1 = 0;
	x2 = 1;
	for (int i=2; i<=n; i++){
		x3 = x1 + x2;
		x1 = x2; 
		x2 = x3;
	}
	printf ("So muon tim o vi tri  la %d\n",x3);
	return 0;
}

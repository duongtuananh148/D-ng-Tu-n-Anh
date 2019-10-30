#include <stdio.h>
int main(){
	int n;
	printf ("Nhap vao so n = ");
	scanf ("%d", &n);
	int S=0;
	for (int i = 1; i<=n/2; i++){
		if (n%i==0){
			S = S + i;
		}
	}
	if (S==n){
		printf ("%d la so hoan hao\n", n);
	}else {
		printf ("%d khong phai la so hoan hao\n", n);
	}
	return 0;
}


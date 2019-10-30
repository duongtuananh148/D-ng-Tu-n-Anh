#include <stdio.h>
int fibonaci (int n){
	int x1=0, x2=1, x3;
	for (int i=2; i<=n; i++){
		x3 = x1 + x2;
		x1 = x2; 
		x2 = x3;
	}
	return x3;
}
int main (){
	int n;
	printf ("Nhap so n: ");
	scanf ("%d", &n);
	printf ("So thu %d trong day fibonaci: %d", n , fibonaci(n));
}


#include <stdio.h>
int main(){
	int x1, x2, x3;
	x1 = 0;
	x2 = 1;
	printf ("Day fibonaci 1< <100 gom: ");
	for (int i=2; i<100; i++){
		x3 = x1 + x2;
		x1 = x2; 
		x2 = x3;
		if (x3>1 && x3<100){
			printf ("%d ",x3);
		}
	}
	return 0;
}

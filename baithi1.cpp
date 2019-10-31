#include <stdio.h>
int main(){
	int t1, t2, t3;
	t1 = 0;
	t2 = 1;
	printf ("Gia tri day fibonaci tu 1 den 100 la:\n ");
	for (int i=2; i<100; i++){
		t3 = t1 + t2;
		t1 = t2; 
		t2 = t3;
		if (t3>1 && t3<100){
			printf("%d\n", t3);
		}
	}
	return 0;
}

#include <stdio.h>
int main (){
	int ary [10];
	for (int i = 0; i < 10; i++){
		do {
			printf ("Nhap phan tu thu %d\n", i);
			scanf ("%d", &ary[i]);
		} while (ary[i]%2==0);
	}
	printf ("Mang vua nhap:\n");
	for (int i = 0; i < 10; i++){
		printf ("ary[%d] = %d\n",i,ary[i]);
	}
	return 0;
}

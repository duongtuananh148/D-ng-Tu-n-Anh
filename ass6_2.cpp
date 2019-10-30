#include <stdio.h>
int main (){
	int ary [20];
	for (int i = 0; i < 20; i++){
		printf ("Nhap phan tu thu %d\n", i);
		scanf ("%d", &ary[i]);
	}
	for (int i = 0; i < 20; i++){
		if (ary[i]%2!=0){
			printf ("So le la %d\n", ary[i]);
		}
	}
	return 0;
}

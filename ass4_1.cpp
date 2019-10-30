#include <stdio.h>
int main (){
	int a,b,c;
	do{
	printf("Nhap so a\n");
	scanf("%d",&a);
	printf ("Nhap so b\n");
	scanf ("%d",&b);
	printf ("Nhap so c\n");
	scanf ("%d",&c);
	} while (a+b<=c||a+c<=b||c+b<=a);
	printf("a b c la 3 canh cua mot tam giac\n");
	return 0;
}

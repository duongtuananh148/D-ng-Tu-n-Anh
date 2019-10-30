#include <stdio.h>
int main (){
	int x=10, y=20;
	int z;
	z=x;
	x=y;
	y=z;
	printf("x = %d   y = %d\n",x,y);
	return 0;
}

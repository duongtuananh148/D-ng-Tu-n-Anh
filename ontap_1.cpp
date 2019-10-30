#include <stdio.h>
int main (){
	int a,b;
	printf("Nhap vao so a\n");
	scanf("%d",&a);
	printf("Nhap vao so b\n");
	scanf("%d",&b);
	if(a>b){
		printf("So lon hon la %d\n", a);
	}else{
		printf("So lon hon la %d\n", b);
	}
	return 0;
}

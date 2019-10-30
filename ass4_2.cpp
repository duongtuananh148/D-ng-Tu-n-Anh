#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n\n");
	scanf("%d",&n);
	int x;
	for (int i=0;i<=n;i++){
		if(i%3==0){
			printf("Cac so chia het cho 3 la %d\n",i);
		}
	}
	return 0;
}

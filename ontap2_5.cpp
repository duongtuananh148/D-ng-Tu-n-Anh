#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int dem=0;
	for(int i=2;i<n;i++){
		for (int j=1; j<=i; j++){
		if(i%j==0)
			dem++;
		}
		if(dem == 2){
		printf("So nguyen to nho hon %d la %d\n",n,i);
		}
		dem = 0;
	}
	return 0;
}

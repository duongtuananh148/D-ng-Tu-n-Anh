#include <stdio.h>
int main() {
	int year = 0;
	double laisuat = 0, tongtien = 0, lai = 0;
	printf("So von gui:\n");
	scanf("%lf",&tongtien);
	printf("So nam gui:\n");
	scanf("%d",&year);
	printf("Lai suat:\n");
	scanf("%lf",&laisuat);
	
	for(int i = 1; i <= year; i++){
		lai = tongtien * (laisuat / 100);
		tongtien = tongtien + lai;
		printf("Nam %d, lai %lf, tong: %lf \n",i,lai,tongtien);
	}
		
	return 0;
}

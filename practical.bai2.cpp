#include <stdio.h>
void tinhlai(int nam, double r, double sum, double lai){
	for(int i = 1; i <= nam; i++){
		lai = sum * (r / 100);
		sum += lai;
		printf("year %d, interest %lf, sum: %lf \n",i,lai,sum);
	}
}
int main() {
	int nam = 0;
	double r = 0, sum = 0, lai = 0;
	printf("Enter capital sum: ");
	scanf("%lf",&sum);
	printf("Enter rate of interest: ");
	scanf("%lf",&r);
	printf("Enter number of years: ");
	scanf("%d",&nam);
	tinhlai (nam, r, sum, lai);
	return 0;
}

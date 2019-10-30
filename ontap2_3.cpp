#include <stdio.h>
int main (){
	int S = 0 ; 
	for (int i = 0, j = 0; i < 100;j++){
		if ( j%2!=0){
			S = S + j; // S += j
			i++;
		}
	}
	printf ("Tong la %d\n", S);
	return 0;
}

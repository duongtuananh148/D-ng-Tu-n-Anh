#include <stdio.h>
int main (){
	int ary [10];
	for (int i = 0; i < 10; i++){
		printf ("Nhap so thu %d\n", i);
		scanf ("%d", &ary[i]);
	}
	for (int i = 0; i < 10; ++i){
		int t = 0, temp = ary[i]; //dung` bien' trung gian de? giu~ nguyen gia tri cua mang tai vi tri [i]
		while (temp!=0){
			t=t*10+temp%10;
			temp /= 10;
		}
	printf ("So nghich dao = %d\n", t );
	}
	return 0;
}

#include <stdio.h>
int main (){
	int n;
	bool cs = true;
	while (cs){
			do {
			printf("Vui long chon chuc nang:\n");
			printf("1.Goi mon an\n");
			printf("2.Goi do uong\n");
			printf("3.Tinh tien\n");
			printf("4.Thoat chuong trinh\n");
			scanf("%d",&n);
			}while (n>4||n<1);
			switch (n){
				case 1:
					{
					int choose;
					bool cs1 = true; 
					while (cs1){
						do {
						printf ("Chon mon\n");
						printf (" 1 . Bo\n");
						printf (" 2 . Ga\n");
						printf (" 3 . Vit\n");
						printf (" 4 . Quay lai\n");
						scanf ("%d", &choose);
						}while (choose > 4 || choose < 1);
						switch (choose){
						case 1: printf ("Khach hang vua chon mon Bo\n"); break;
						case 2: printf ("Khach hang vua chon mon Ga\n"); break;
						case 3: printf ("Khach hang vua chon mon Vit\n");break;
						case 4: cs1 = false; break;
						}
					}
					break;
				}
				case 2:
					{
					int choose2;
					bool cs2 = true; 
					while (cs2){
						do {
						printf ("Chon do uong\n");
						printf (" 1 . Bia\n");
						printf (" 2 . Ruou\n");
						printf (" 3 . Nuoc ngot\n");
						printf (" 4 . Quay lai\n");
						scanf ("%d", &choose2);
						}while (choose2 > 4 || choose2 < 1);
						switch (choose2){
						case 1: printf ("Khach hang vua goi Bia\n"); break;
						case 2: printf ("Khach hang vua goi Ruou\n"); break;
						case 3: printf ("Khach hang vua goi Nuoc ngot\n");break;
						case 4: cs2 = false; break;
						}
					}
					break;
				}
				case 3:
					{
					printf ("Tinh tien\n");
					break;
				}
				case 4:
					{
					cs = false;
					break;
				}	
			}
	}
return 0;
}

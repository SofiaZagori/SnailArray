#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[10][10];
	int st,gr,k,h;
	k=1;
	h=10;
	
	for(gr=0;gr<10;gr++){
		for(st=0;st<10;st++){
			a[gr][st]=0;
			}
		}
		do{
			
			for(st=10-h;st<=h-2;st++){
				a[10-h][st]=k;
				k++;
			}
			for(gr=10-h;gr<h-1;gr++){
				a[gr][h-1]=k;
				k++;
			}
			for(st=h-1;st>10-h;st=st-1){
				a[h-1][st]=k;
				k++;
			}
			for(gr=h-1;gr>10-h;gr=gr-1){
				a[gr][10-h]=k;
				k++;
			}
			h=h-1;
		}while(k<=100);
	
	for(gr=0;gr<10;gr++){
		for(st=0;st<10;st++){
			printf("%3d ",a[gr][st]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}





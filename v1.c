#include <stdio.h>
#include <math.h>

int main(void){
	int i,j,k;
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
		k=i*j;
		printf("%d*%d = %3d ",i,j,k);
		}
	printf("\n");
	}
return 0;
}

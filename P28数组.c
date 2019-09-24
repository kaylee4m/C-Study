#include <stdio.h>
//把一个二维数组行和列元素互换，存在另一个二维数组中。比如吧a[2][3]换成b[3][2]
void main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2], i, j;

	printf("array a:\n");
	for (i = 0; i <=1; i++){
		for (j = 0; j <=2; j++){
			printf("%5d\n", a[i][j]);
			b[i][j] = a[j][i];
		}
		printf("\n");
	}
	printf("array b:\n");
	for (i=0; i<=2; i++){
		for (j=0; j<=1; j++){
			printf("%5d\n", b[i][j]);
		}
		printf("\n");
	}
}
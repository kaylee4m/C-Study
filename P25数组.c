#include <stdio.h>

//求解Fibonacci数列
// void main(){
// 	int i;
// 	int a[20] = {1,1};
// 	for (i=2; i < 20; i++){
// 		a[i] = a[i-2] + a[i-1];
// 	}
// 	for(i=0; i<20; i++){
// 		if(0 == i%5){
// 			printf("\n");
// 		}
// 		printf("%12d\n", a[i]);
// 	}
// 	printf("\n");
// }


//例：冒泡法对10个数排序（相邻的比较，小的掉到前面）
//过程：先通过动态赋值的方法让用户输入是个待排序的数字，通过数组保存起来，掌握两个循环，外层循环限制有多少趟比较，内层循环限制某趟比较要进行两两对比的次数。
//如果a[i]>a[i+1],则将两数进行交换，因为要求从小到大排列
//最终的结果输出
void main(){
	int a[10];
	int i, j, t;
	printf("input 10 numbers:\n");
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	printf("\n");  //前面这些实现用户输入数据到数组
	for(j=0; j<9; j++){
		for(i=0; i<9-j; i++){
			if(a[i]>a[i+1]){
				t = a[i]; a[i]=a[i+1]; a[i+1]=t;
			}  //上边是把a[i]和a[i+1]两数调换
		}
		printf("the sorted numbers:\n");
		for(i=0; i<10; i++){
			printf("%d\n", a[i]);
		}
		printf("\n");
	}
}

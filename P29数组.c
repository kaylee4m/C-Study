#include <stdio.h>
#define M 10  //宏定义：只要出现M，就等于10

//利用数组进行数据查找--二分法折半查找法
//每次都把查找范围缩小一半
//假设数组a中的数据是从小到大顺序排列的“ -12, 0, 6, 16, 23, 56, 80, 100, 110, 115。 从键盘上输入一个数，判定该数是否在数组中，若在，输出所在序号
//第一步设定low, midk high 三个变量。分别是起始，中间和最后一个元素位置
//第二部确定新的查找区间
//然后继续查找，确定最后一个区间
 void main(){
 	static int a[M] = {-12, 0, 6, 16, 23, 56, 80, 100, 110, 115};
 	//一个程序编译运行的时候，普通变量放在栈区，而static会让变量存放在data区，整个内存主要分四大区： code, data, stack, heap
 	int n, low, mid, high, found;
 	low = 0;
 	high = M-1;
 	found = 0;  
 	printf("Input a number to be searched:\n");
 	scanf("%d", &n); //以上是预处理
 	while(low <= high){
 		mid = (low+high)/2;
 		if(n == a[mid]){
 			found = 1; break;
 		} //找到结束循环
 		else if (n > a[mid])
 			low = mid + 1;
 		else
 			high = mid -1;
 	}
 	if (found ==1)
 		printf("The index of %d is\n", n, mid);
 	else
 		printf("There is not %d\n", n);
 }

 
#include <stdio.h>

//while语句一般是关系表达或逻辑表达，只要表达式的值为非0就是真，可以继续循环
void main(){
	int a = 0;
	printf("\n input n:");
	scanf("%d", &n);
	while (n--){
		printf("%d\n", a++*2);    //就是a*2, a++
	}
}

//循环体如包括有一个以上的语句，比如用{}括起来，组成复合语句。

// do
// 	语句
// while
//do-while就是先执行循环里的语句，在判断表达式是否为真，如果是真就继续循环，如果是假就跳出来

//例子 求1到100的和
void main(){
	int i, sum = 0;
	i = 1;
	do{
		sum = sum + i;
		i++;
	}while (i <= 100);  //这里需要有;标志结束

	printf("%d\n", sum);
}


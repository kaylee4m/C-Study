#include <stdio.h>

//例子 输出下面的图形 *的数量和行数相同
// *
// **
// ***
// ****
// *****
// ******

void main(){
	int i, j;
	for (i=1; i<7; i++){
		for(j=1;  j<=i; j++){
			putchar('*');
		}
		printf("\n");
	}
}



//几种循环比较：
//四种都可以处理同一个问题，一般都可以互相代替，但不提倡用goto循环
//while和dowhile循环中，只在while后面的括号内指定循环的条件，为了能征程结束，应该包含能让循环趋于结束的语句，比如i++, i=i+1等
//for循环可以在表达式3中包含使循环趋于结束的操作，甚至可以把循环中的操作全放在表达式3中
//用while和dowhile循环中，变量初始化的操作应该在while和dowhile语句之前完成而for语句可以在表达式1中实现循环变量的初始化
//while， dowhile循环和for循环可以用break语句跳出循环，用continue语句结束本次循环，而对用goto语句和if语句构成的循环，不能用break语句和continue语句进行控制









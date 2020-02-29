#include <stdio.h>

//一个较大的程序可以分为若干个程序模块，每个模块用来实现一个特定的功能
//高级语言中用自程序实现模块功能。子程序由函数来完成。
//一个C程序可以用一个主函数和若干个子函数完成

//例子
void main(){
	void printstar();  //对printstar函数声明
	void print_message(); //对print_message函数声明
	printstart(); //调用这个函数
	print_message(); //调用这个函数
	printstar(); //调用这个函数
}

void printstar(){
	printf("***********\n");
}

void print_message(){
	printf("小甲鱼万岁\n");
}


/*
*一个源程序文件由一个或多个一级其他有关内容组成，一个源程序文件是一个编译单位而不是以函数为单位编译的
*C的执行是从main函数开始的
*所有的函数是平行的，相互独立的。一个函数不从属于另一个函数

函数定义的一般形式：类型标识符 函数名（形式参数表列）{
	声明部分
	语句部分
}

*在大多数情况下，主调函数和被调用函数有数据传递关系
*return后面的括弧中的值（）作为函数带回的值
*在不同的函数之间传递数据，可以用参数，返回值和全局变量


*/
void main(){
	int max(int x, int y);  //形参
	int a, b, c;
	scanf("%d, %d", &a, &b);
	c = max(a,b);   //实参
	printf("Max is %d\n", c);
}

int max(int x, int y){
	int z;
	z = x>y? x:y;
	return z;
}





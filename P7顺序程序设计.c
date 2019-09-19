#include <stdio.h>

//程序分为顺序结构，分支结构，循环结构
//表达式语句：表达式语句由表达式加上分号；
//函数调用语句：函数名实际参数和分号
//控制语句，包括条件判断，循环，转向语句。
//复合语句：是把多个语句用括号{}扩起来组成的一个语句
//空语句：只有分号
//赋值语句：变量=表达式。 int a =5, b, c;
//变量赋值中不允许连续给多个变量赋初始值 比如int a=b=c=5 是错误的
//数据的输入输出和实现：使用C语言函数是，要把预编译命令#include<stdio.h>写在最前

//putchar函数：字符输出函数。
//例： 
//putchar('A'); 输出大写A
//putchar(x);  输出字符变量x的值
//putchar('\101'); 也是输出A
//putchar('\n'); 换行

// void main()
// {
// 	char a = 'B', b='o', c='k';
// 	putchar(a); putchar(b); putchar(b); putchar(c); putchar('\t');
// 	putchar(a); putchar(b);
// 	putchar('\n');
// 	putchar(b); putchar(c);
// }



//getchar函数（键盘输入函数）

// void main(){
// 	char c;
// 	printf("input a character\n");
// 	c = getchar();
// 	putchar(c);
// }



//格式输入和输出
//printf的f是format，它的函数原型在stdio.h里
//%d是十进制整型， %c是字符型
// void main(){
// 	int a = 88, b = 89;
// 	printf("%d %d\n", a,b);
// 	printf("%d, %d\n", a,b);
// 	printf("%c, %c\n", a, b);
// 	printf("a=%d, b = %d", a,b);
// 	return 0;
// }


// void main()
// {
// 	int a = 15;
// 	float b = 123.1234567;
// 	char d = 'p';
// 	printf("a = %d, %5d, %o, %x\n", a,a,a,a);
// 	printf("b = %f, %lf, %5.4lf, %e\n", b,b,b,b);
// 	printf("c = %lf, %f, %8.4lf\n", c,c,c);
// 	printf("d = %c, %8c\n", d,d);
// }



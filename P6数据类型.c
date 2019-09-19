#include <stdio.h>

//C中有15级的运算优先级，运算的时候查一下
//自增，自减有下面几种形式： 
// ++i  i自增1后再参与其他运算
// --i  i自减1后再参与其他运算
// i++  i参与运算后，i的值再自增1
// i--  i参与运算后，i的值再自减1
// void main()
// {
// 	int i = 8;
// 	printf("%d\n", ++i);
// 	printf("%d\n", --i);
// 	printf("%d\n", i++);
// 	printf("%d\n", i--);
// 	printf("%d\n", -i++);
// 	printf("%d\n", -i--);
// }
//例2
// void main()
// {
// 	int i = 5, j = 5, p, q;
// 	p = (i++) + (i++) + (i++);
// 	q = (++j) = (++j) + (++j);
// 	printf("%d, %d, %d, %d", p, q, i, j);
// }



//赋值运算符是从右到左的。 比如a=b=c=5
//复合的赋值运算符： a+=5 也就是a=a+5； x*=y+7也就是x=x*(y+7); r%=p也就是r=r%p
//这对提高编译处理有效



//逗号运算符，功能是把两个表达式连接起来组成一个表达式
//y = 表达式1，表达式2.。。。。。取最后一个表达式的结果赋值
// void main()
// {
// 	int a=2, b=4, c=6, x, y;
// 	y = ((x=a+b), (b+c));
// 	printf("y=%d, x = %d\n", y,x);
// }
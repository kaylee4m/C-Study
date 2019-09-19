#include <stdio.h>

//赋值运算中数据类型不同时，赋值号右边会自动转换为左边
//例子 s,r都是整型，在执行时r和PI都会转换成double型计算，但由于s是整型，所以结果依然是整型，省去了小数
// void main()
// {
// 	float PI = 3.14159;
// 	int s, r = 5;
// 	s = r*r*PI;
// 	printf("s = %d\n", s);
// }



//强制类型转换
//例如 (float)a 把a转换为实型；单个变量才可以不加括号 （int)(x+y)  把x+y的结果转换为整型
//例子说明f虽然强制转换为int但只是在运算中起作用，是临时的，而f本身的类型不改变
// void main()
// {
// 	float f = 5.75;
// 	printf("(int)f=%d, f=%f\n", (int)f,f);
// }



//算数运算。除法时参与运算是整型，结果也是整型。因此下例1的输出答案是1。
// void main()
// {
// 	printf("%d\n", 3/2);
// }


// void main()
// {
// 	printf("%f\n", 3.0/2);
// }



//百分号就是求余数
// void main()
// {
// 	printf("%d\n", 7 % 2);
// }




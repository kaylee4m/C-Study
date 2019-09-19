#include <stdio.h>

//格式输入和输出
//scanf函数，原型在头文件中，scanf（“格式控制字符串”，地址表列）；
//&a表示变量a的地址，是编译系统分配的地址。变量的地址是C编译系统分配。比如： a = 567； 567是变量的值， &a是变量a的地址。
//&a是一个表达式，其功能是求变量的地址。

// void main()
// {
// 	int a,b,c;
// 	printf("input a,b,c\n");
// 	scanf("%d%d%d", &a,&b,&c);
// 	printf("a=%d,b=%d,c=%d", a,b,c);
// }



//格式字符串，一般形式为%[*][输入数据宽度][长度]。*表示输入项密度入喉跳过该输入值。
//宽度用十进制整数指定输入的宽度，即字符数。
//长度格式为l和h。表示长整型和短整型。
//scanf函数中没有精度控制，比如scanf("%5.2f", &a)是非法的。还要求给变量地址，如果写成变量名a是错误的。输入多个数值数时，可以回车空格tab。
// void main()
// {
// 	char a,b;
// 	printf("input character a and b:\n");
// 	scanf("%c %c", &a, &b); //%c之间有空格
// 	printf("%c %c\n", a, b);
// }



//A对应的ASCII码是65,大小写差别32，a对应的是97
 void main()
 {
     char a, b, c;
     printf("input character a,b,c\n");
     scanf("%c, %c, %c", &a, &b, &c);
     printf("%d, %d, %d\n %c,%c,%c\n", a,b,c,a-32,b-32,c-32);
 }









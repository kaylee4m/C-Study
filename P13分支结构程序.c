#include <stdio.h>

//表达式1？表达式2:表达式3
//如果表达式1的值是真的，则以表达式2的值作为条件表达式的值，否则以表达式3的值作为整个条件表达式的值
//一般用在赋值语句中， 比如max=(a>b)?a:b;
//条件运算符？和：是一对，不能分开
//条件运算符的结合方向是自右向左
//比如a>b?a:c>d?c:d应该理解为a>b?a:（c>d?c:d）



// void main(){
// 	char ch;
// 	scanf("%c", &ch);
// 	ch = (ch>'A' && ch < 'Z')? (ch+32):ch;
// 	printf("%c\n", ch );
// }

//switch语句
// void main(){
// 	int a;
// 	printf("input integer number:\n");
// 	scanf("%d", &a);
// 	switch(a){ //swith后面的括号里也可以是表达式
// 		case 1: printf("Monday\n"); break;
// 		case 2: printf("Tuesday\n"); break;
// 		case 3: printf("Wednesday\n"); break;
// 		case 4: printf("Thursday\n"); break;
// 		case 5: printf("Friday\n"); break;
// 		case 6: printf("Saturday\n"); break;
// 		case 7: printf("Sunday \n"); break;
// 		default: printf("error\n");	
// 	}
// }


//各case和default可以替换顺序，不会影响结果
//default也可以不用




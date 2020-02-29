#include <stdio.h>
#include <math.h>
/*函数的调用
*一般形式为：函数名（实参表列）
*如果是调用无参函数，则可以没有实参表列
*如果实参表列包含多个实参，对实参的求值顺序不是确定的
*/

void main(){
	int f(int a, int b); //函数声明
	int i=2, p;
	p = f(i, ++i); //函数调用
	printf("%d\n", p);
}
int f(int a, int b)  //函数定义
{
	int c;
	if(a>b) c = 1;
	else if (a==b) c = 0;
	else c = -1;
	return(c);
}

// 函数调用作为一个语句，或者函数有一个表达式，第三种是函数参数，整个函数作为一个参数；

/*如果使用库函数，就在开头命令将调用有关库的函数用的信息包含进来
*如果使用用户自己定义的函数，而这个函数的位置在调用它的函数（即主调函数）后面（同一个文件中），应该在主调函数中对被调用的函数做声明
关键词中，声明declaration是说明的意思，编译器可以识别函数 
*/


// 对被调用的函数做声明
void main(){
	float add(folat x, float y); //对被调用的函数add的声明
	float a,b,c;
	scanf("%f, %f", &a, &b);
	c = add(a,b);
	printf("sum is %f\n", c);
}

float add(float x, floaty){
	float z;
	z = x+y;
	return z;
}



//例题
// 1）自己实现pow函数。指数函数（x的y次方）
// int main(void){
// 	double power(double, double);
// 	double x = 2.0, y = 3.0;
// 	double result;
// 	result = pow(x,y);
// 	printf("%lf raised to %lf is %lf\n", x, y, result);
// 	return 0;
// }

// double power(double a, double b){
// 	&....
// }

void main(void){
	double x = 2.0, y = 3.0, z;
	z = power(x, y);
	printf("%.1d tp the power of %.1f is %.1f\n", x,y,z);
}
double power (double x, double y){
	double z;
	while (y){
		z *=x;
		--y;
	}
	return z;
}

// 2）猜想sqrt的原理

void main(void){
	int question = 49, answer;
	answer = sqrt(question); 
	if (question < 0)
		printf("Error: sqrt returns %.2f\n", answer);
	else
		printf("The square root of %d\n", question);
}

int sqrt_02( int question){
	int temp = question/2;
	while(1){
	if(temp*temp == question)
		return trmp;
	else 
		temp -=1;
	}
}


// 3）编写一个用来统计输入的各个数字，空白符，以及所有其他字符出现次数的程序。分别储存在num[10], blank, others里边并打印
//EOF是退出健






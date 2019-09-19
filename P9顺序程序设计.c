#include <stdio.h>

//例题：输入三角形三边长求三角形面积。已知三角形的三边长a,b,c。则该三角形的面积公式为area=根号下s(s-a)(s-b)(s-c)。其中s=(a+b+c)/2
// void main(){
// 	double a,b,c,s,area;
// 	scanf("%lf,%lf,%lf", &a,&b,&c); //double型是lf
// 	s=1.0/2(a+b+c); //先用1.0除才能保证浮点型，也可以(a+b+c)/2.0
// 	area = sqrt(s*(s-a)*(s-b)*(s-c));
// 	printf("a = %7.2f, b = %7.2f, c = %7.2f, s = %7.2f\n", a,b,c,s);  //表示数据表示至少7位,后面的.2表示小数点后保留两位
// 	printf("area = %7.2f\n", area);
// }


//例2:求ax平方+bx+c=0的方程的根， abc键盘输入，设b的平方-4ac > 0。
void main(){
	double a,b,c,disc,x1,x2,p,q;
	scanf("a=%lf, b=%lf, c=%lf", &a, &b, &c);
	disc = b*b-4*a*c;
	p = -b / (2*a);
	q = sqrt((disc)/(a*2));
	x1 = p+q;
	x2 = p-q;
	printf("\nx1=%5.2f\nx2=%5.2f\n", x1, x2);
}
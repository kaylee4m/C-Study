#include <stdio.h>
#include <math.h>

//求Fibonacci数列前40个数。这个数列有如下特点：1，1，2，3，4，5，13，21.。从第三个数字开始的数字是前两个数字的和
//F(n)= F(n-1)+F(n-2)
// void main(){
// 	long int f1,f2;
// 	int i;
// 	f1 = 1; f2 = 1;
// 	for(i = 1; i<=20; i++){
// 		printf("%12ld%12ld\n", f1, f2);
// 		if(i%2==0){
// 			printf("\n");
// 		}
// 		f1 = f1 + f2;
// 		f2 = f2 + f1;
// 	}
// }


//写一个程序，允许输入一个数，并判断m是素数(只能被1和自身整除)
//让m被2到k除，如果能被任何一个数字整除就提前结束循环
void main(){
	int m, i, k;
	scanf ("%d", &m); k = sqrt(m);
	for (i=2; i<=k; i++)
	if (m%i == 0)
		break;
	if (i>k){ 
		printf("%d is a prime number\n", m);
	}
	else{
		printf("%d is not a prime number\n", m);
	}
}

//把100-200的素数打印出来
void main(){
	int m, k, i, n=0;
	for(m = 101; m<=200; m = m+2){
		k = sqrt(m);
		for(i =2; 1<=k; i++){
			if(m%i == 0)break;
		}
		if (i>=k+1){
			printf("%d\n", m);
			n = n+1;
		}
		if (n%10 ==0){
			printf("\n");
		}
		printf("\n");
	}
}


//译密码，把字母A变成E，a变成e，变成其后面的4个字母
//两个功能，第一个输入原文变密码，第二个输入密码变成原文


}
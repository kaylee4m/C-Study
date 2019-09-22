#include <stdio.h>
#include <math.h>

//例子:把100-200之间的不能被3整除的数输出
//提示：能被3整除时，执行continue，结束本次循环（跳过printf），只有n不能被3整除时才执行printf函数
// void main(){
// 	int n;
// 	for(n=100; n<=200; n++){
// 		if(0 == n%3){  //倒过来写比较稳定
// 			continue;
// 		}
// 		printf("%d\n", n);
// 	}
// }

//例：用pi/4约等于1-1/3+1/5-1/7.。。求派的近似值，知道某一项的绝对值小于为止
//提示：1，要确定计算的精度，可以配合while循环语句用fabs（）函数确定精度来退出；2，根据观察，分子不变，分母每次递增2且正负切换，3，结果遥乘以4

// void main(){
// 	int s; float n, t, pi;
// 	t =1; pi =0; n = 1.0; s=1;
// 	while (fabs(t)> 1e-6){
// 		pi = pi +t; n =n+2; s =-s; t = s/n;
// 	}
// 	pi = pi *4;
// 	printf("pi = %10.6f\n", pi);
// }




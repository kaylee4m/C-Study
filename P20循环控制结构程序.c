#include <conio.h>

#include <stdio.h>

//例题训练：有1，2，3，4数字，能组成多少个互不相同且没有重复数字的三位数，都是多少？
//分析：可以填在百位，十位，个位的都是1，2，3，4。组成所有的排列后再去掉不满足条件的排列
// void main(){
// 	int i, j, k;
// 	printf("\n");
// 	for(i=1; i<5; i++){
// 		for(j=1; j<5; j++){
// 			for(k=1; k<5; k++){
// 				if(i!=k && i!=j && j!=k)
// 					printf("%d,%d, %d\n", i,j,k);
// 			}
// 		}
// 	}
// }



// break可以用来从循环体内跳出循环体，即提前结束循环，接着执行循环下面的语句
//一般形式：   break；
// break不能用于循环语句和switch语句之外的任何其他语句中
//break跳出来的是for语句
// void main(){
// 	int r;
// 	double pi = 3.14159, area;
// 	for (r=1; r<=10; r++){
// 		area = pi * r * r;
// 		if (area > 100){
// 			break;
// 		}
// 		printf("r = %d, area = %lf\n", r, area);
// 	}
// }



//break语句例子
void main(){
	int i = 0;
	char c;
	while (1){
		c = '\0';
		while(c!=13&&c!=27){. //键盘接受字符直到按回车或者Esc键
			c = getch();
			printf("%c\n", c);
		}
		if(c==27)
			break; //若按Esc键则退出循环
		i++;
		printf("The No. is %d\n", i);
	}
	printf("The end");
}



//continue语句
//作为结束本次循环，即跳过循环体下面尚未执行的语句，接着进行下一次是否执行循环的判定
//显示输入的字符，如果按的是Esc,则退出循环，如果按的是Enter，则不做任何处理，继续输入下一个字符
//Esc的ACSII码是27

void main(){
	char ch;
	for( ; ; ){
		ch = getch();
		if (ch == 27)
			break;
		if (ch ==13)
			continue;
		putch(ch);
	}
	getch();
}









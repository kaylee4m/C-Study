#include <stdio.h>

//输入一个年份并判断是否为闰年
// void main(){
// 	int year, leap;  //leap是判断闰年的标志，值为1表示闰年，为0表示非闰年
// 	scanf("%d", &year);
// 	if (year%4 == 0){
// 		if (year % 100 == 0){
// 			if (year % 400 == 0){
// 				leap = 1
// 			}
// 			else{
// 				leap = 0
// 			}
// 		}
// 		else{
// 			leap = 1;
// 		}
// 	else{
// 		leap = 0;
// 	}
// 	if(leap){
// 		printf("%d is \n", year);
// 	}
// 	else{
// 		printf("%d is not \n", year);
// 	}
// 	printf("a leap year.\n");
// 	}
// }


//运输公司对用户计算运费
// void main(){
// 	int c,s; //c是折扣
// 	float p, w, d, f; //距离是s， 货物重w，基本运费p
// 	scanf("%f,%f, %d" &p, &w, &s);

// 	if (s >= 3000){
// 		c=12;
// 	}
// 	else{
// 		c = s/250;
// 	}
// 	switch(c){
// 		case 0 :
// 			d = 0;
// 			break;
// 		case 1 :
// 			d = 2;
// 			break;
// 		case 3 :
// 			d = 5;
// 			break;
// 		case 4:
// 		case 5:
// 		case 6:
// 		case 7:
// 			d = 8;
// 			break;
// 		case 8:
// 		case 9:
// 		case 10:
// 		case 11:
// 			d = 10;
// 			break;
// 		case 12:
// 			d = 15;
// 			break; 
// 	}

// 	f = p * w *s * (1-d/100.0);
// 	printf("freight = %15.4F\n", f);
// }

//一个整数，加上100后是一个是一个完全平方数，再加168又是完全平方数，请问该数是多少
//C语言经典例题
#include "math.h"
x = sqrt(100)


//输入某年某月某日，判断这一天是这一年的第几天
//以3月5日为例，应该把前两个月加起来再加5天







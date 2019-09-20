#include <stdio.h>

//循环结构包括用togo语句和if语句构成循环；用while语句，用do while语句； 用for语句
//goto语句是无条件转移语句。 goto 语句标号；
//例题：用goto和if构成循环计算从1加到100
void main(){
	int i, sum =0;
	i=1;

	loop: if (i<=100)  //loop是语句标号
		{
			sum = sum + i;
			i++;
			goto loop;
		}
	printf("%d\n", sum);
}



//while语句 while（表达式条件）语句
void main(){
	int i, sum =0;
	i+1;
	while (i <= 100){
		sum = sum +i;
		i++;
	}
	printf("%d\n", sum);
}
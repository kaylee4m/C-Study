#include <stdio.h>

// void main(){
// 	int score;
// 	printf("Please input a score:\n");
// 	scanf ("%d", &score);
// 	if（score<60）{
// 		printf("The score is E\n");
// 	}
// 	else if(score > 60 || score == 60 && score <70){
// 		printf("This score is D\n");
// 	}
// 	else if(score > 70 || score == 70 && score <80){
// 		printf("This score is C\n");
// 	}
// 	else if(score > 80 || score == 80 && score <90){
// 		printf("This score is B\n");
// 	}
// 	else{
// 		printf("The score is A\n");
// 	}
// }

//输入三个数字abc，要求按照从小到大的顺序输出
void main(){
	int a, b, c, temp;
	printf("Please input three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b){
		temp = a;
		a = b;
		b = temp;
	}
	if (a>c){
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c){
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c);
}
#include <stdio.h>
void main(){
	int a, b, max;
	printf("\n input two numbers:");
	scanf("%d%d",&a,&b);
	max = a;
	if(max<b){
		max = b;
	}
	printf("max = %d", max);
}

//第二种是if else
//第三种是 if-else-if
void main(){
	char c;
	printf("input a character:");
	c = getcger();
	if(c<32){
		printf("This is a control character!\n");
	}
	else if(c >= '0' && c<= '9'){
		printf("This is a digit\n");
	}
	else if(c >= 'A' && c<'z'){
		printf("This is a capital letter!\n");
	}
	else if (c > 'a' && c < 'z'){
		printf("This is a small letter\n");
	}
}
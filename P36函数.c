
//嵌套就是定义函数时，其函数内又包含另一个函数的完整定义
/*
main(){
	a();
}

a(){
	b();
}

b(){
	return;
}
*/


// 计算s = 2的平方+3的平方！（！是阶乘的意思）

long square(int p);  //实现平方
long factorial(int q);  //实现阶层

void main(){
	int i;
	long s = 0;

	for(i =2; i <=3; i++){
		s = s + square(i);
	}
	printf("%ld\n", s);
}

long square(int p){
	int k;
	long r;
	long factorial(int);

	k = p*p;
	r = factorial(k);

	return r;
}

long factorial(int q){
	long c = 1;
	int i;
	for( i = 1; i <=1; i++){
		c = i;
	}
	return c;
}



//递归是说在调用一个函数的过程中又出现直接或间接的调用该函数本身，称为函数的递归调用。C语言的特点之一就是允许函数的递归调用
int f(int x){
	int y, z;
	z = f(y);
	return(2*z);
}
//递归总要有一个停止退出条件
//递归例题：求n！
// n = 1, n*(n-1)!
long recursion (int n);
void main(){
	int n;
	long result;
	printf("input a integer number:\n");
	scanf("%d", &n);
	result = recursion(n);
	printf("%d! = %1d\n", n, result);
}

long recursion(int n){
	long temp_result;
	if (n < 0){
		printf("n <0, input error!\n");
	}
	else if (n == 0 || n ==1){
		temp_result = 1;
	}
	else{
		temp_result = recursion(n-1) * n;
	}
	return temp_result;  
}



//程序详解。给出的recursion是一个递归函数。如果n<0, n==0或n=1都可以结束函数的执行
//递推比递归更容易理解和实现
//递归算法是效率低下的算法

//练习题：hanoi塔问题。
















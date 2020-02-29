//关于scanf的返回值，scanf("%d,%d", &a, &b);如果a,b都被成功读入，那么scan的返回值是2；如果只有a被成功读入，返回值是1
// 修改
while(scanf("%d", &n) != 1){
	printf("Illegal input!!\nPlease input again");
	getchar();
}
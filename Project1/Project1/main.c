#pragma warning(disable:4996)
//#include <stdio.h>
//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}


//#include <stdio.h>
//  int main()
// {
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	printf("%c\n", '\f');
//	return 0;
//}


//#include <stdio.h>
////当fahr=0,20,...,300时，分别打印华氏温度与摄氏温度对照表
//int main()
//{
//	int fahr, celsius;
//	int lower, upper, step;
//	lower = 0;//温度表的下限
//	upper = 300;//温度表的上限
//	step = 20;//步长
//	fahr = lower;
//	while (fahr <= upper) {celsius = 5 * (fahr - 32) / 9;
//	printf("%3d %6d\n", fahr, celsius);
//		fahr = fahr + step;
//	   }
//	}


//#include <stdio.h>
////当fahr=0,20,...,300时，分别打印华氏温度与摄氏温度对照表;浮点数版本
//int main()
//{
//	float fahr, celsius;
//	int lower, upper, step;
//	lower = 0;//温度表的下限
//	upper = 300;//温度表的上限
//	step = 20;//步长
//	fahr = lower;
//	while (fahr <= upper) {
//		celsius = (5.0/9.0) * (fahr - 32.0);
//		printf("%3.0f %6.1f\n", fahr, celsius);
//		fahr = fahr + step;
//	}
//}


//#include <stdio.h>
////打印华氏温度-摄氏温度对照表
//mian()
//{
//	int fahr;
//	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr-32));//存在算术溢出
//}


//#include <stdio.h>
//#define LOWER 0//温度表下限
//#define UPPER 300//温度表上限
//#define STEP 20//步长
////打印华氏温度-摄氏温度对照表
//main()
//{
//	int fahr;
//	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
//}

//
//#include <stdio.h>
////将输入复制到输出；版本1
//main()
//{
//	int c;
//	c = getchar();
//	while (c != EOF) {
//		putchar(c);
//		c = getchar();
//	
//}


//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("上大学\n");
//	while (line <= 11)
//	{
//		line++;
//		printf("敲一行代码:%d\n",line);
//	}
//	if(line>=20)
//    printf("好offer\n");
//	return 0;
//}

//
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//		return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int hour1, minute1;
//	int hour2, minute2;
//	printf("请输入两个时间 如 2 30 2 40 表示2：30和2：40\n");
//		scanf("%d %d", &hour1,&minute1);
//	    scanf("%d %d", &hour2,&minute2);
//		int time1 = hour1 * 60 + minute1;
//		int time2 = hour2 * 60 + minute2;
//		int time3 = time1 - time2;
//		printf("时间差是%d时%d分",time3 / 60, time3 % 60);
//	return 0;
//}




//成绩等级输入表

//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	printf("请输入成绩:\n");
//	scanf("%d", &score);
//	printf("你输入的成绩是%d\n等级为:", score);
//	if (score >= 90) {
//		printf("A");
//	}else if (score >= 80) {
//		printf("B");
//	}else if (score >= 70) {
//		printf("C");
//	}else if (score >= 60) {
//		printf("D");
//	}else printf("E");
//		return 0;
//} 

//上面的代码等价于下面这个

//# include <stdio.h>
//int main()
//{
//	int grade = 0;
//	printf("请输入成绩(0到100）\n");
//	scanf("%d", &grade);
//	grade /= 10;
//	printf("等级为："); 
//	switch (grade) {
//	case 10:
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	default:
//		printf("E\n");
//		break;
//	}
//	return 0;
//}


//4位数的逆序运算

//#include<stdio.h>
//int main()
//{
//	int num1, num2;
//	int g, s, b, q;
//	printf("请输入一个四位数\n");
//	scanf("%d", &num1);
//	g = num1 / 1000;
//	s = (num1 / 100) % 10;
//	b = (num1 % 100) / 10;
//	q = num1 % 10;
//	num2 = g + s * 10 + b * 100 + q * 1000;
//	printf("它的逆序数为(0不作为首位） % d", num2);
//		return 0;
//}



//位数计算

//#include<stdio.h>
//int main()
//{
//	int numble;
//	int ws = 1;
//	printf("请输入位数\n");
//	scanf("%d", &numble);
//	while (numble >= 10)
//	{
//		numble /= 10;
//		ws ++;
//	}
//	printf("该数的位数是%d",ws);
//		return 0;
//}


//do while类型
//#include<stdio.h>
//int main()
//{
//	int numble;
//	int ws = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &numble);
//	do{
//		numble /= 10;
//		ws++;
//	} while (numble > 0);
//	printf("该数的位数是%d", ws);
//	return 0;
//}


//猜数游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand(time(0));
//	int a = rand()%100+1;//随机数
//	int c = 0;//你猜的数
//	int b = 0;//你猜的次数
//	printf("###猜数游戏###\n");
//	printf("我已经想好了一个数，请你猜一下\n");
//	do
//	{
//		scanf("%d",&c );
//		b ++;
//		if (c < a) {
//			printf("你猜小了\n");
//		}
//		else if (c > a) 
//		{ printf("你猜大了\n"); }
//	} while (c != a);
//	printf("恭喜你猜对了！你一共猜了%d次", b);
//	return 0;
//}


//算平均数
//#include<stdio.h>
//int main()
//{
//	int a;//输入的数
//	int b = -1;//记录输入的次数
//	int sum = 0;//记录输的数的总和
//	printf("###算平均数###\n");
//	printf("请输入一组数，在结束时输入0\n");
//	do
//	{
//		scanf("%d", &a);
//		b++;
//		sum += a;
//	} while (a != 0);
//	printf("该组数的平均数是：%f", sum*0.1 / b);
//	return 0;
//}


//任意正整数的逆序
//#include<stdio.h>
//int main()
//{
//	printf("###正整数的逆序###\n");
//	int a;//把你输入的数拿去计算
//	int digit = 0;//记录你每次取整划掉的那个数
//	int ret = 0;//记录逆序结果
//	printf("请输入一个正整数\n");
//    scanf("%d", &a);
//	printf("%d的逆序是 ：",a);
//	while (a > 0) {
//		digit = a%10;
//		ret = ret * 10 + digit;
//		a /= 10;}
//	printf("%d", ret);
//	return 0;
//}


//for循环版阶乘计算
//#include<stdio.h>
//int main()
//{
//	printf("###阶乘计算###\n请输入一个正整数\n");
//	int n;//你输入的数
//	int ret = 1;//记录阶乘
//	scanf("%d", &n);
//	for (int jsq = 1/*for循环计数器*/; jsq <= n; jsq++) {
//		ret *= jsq;
//	}
//	printf("%d！= %d", n, ret);
//	return 0;
//}


//#include<stdio.h>
//void sum(int begin, int end)
//{
//	int a;
//	int sum = 0;
//	for (a = begin; a <= end; a++) {
//		sum += a;	
//	}printf("%d", sum);
//}
//int main()
//{
//	sum(1, 50);
//}

//素数判断
//#include<stdio.h>
//int main()
//{
//	int a ,i= 0;
//	scanf("%d", &a);
//	for (i = 2; i < a; i++) {
//		if (a % i == 0) {
//			break;
//		}
//	}
//	if (i < a) {
//		printf("%d不是素数", a);
//	}
//	else printf("%d是素数", a);
//	return 0;
//}

//打印99乘法表
//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	int i = 1;
//	int j = 1;
//	while(j <= a){
//		i = 1;
//		while (i <= j) {
//			printf("%d*%d=%d", i, j, i * j);
//			if (i * j >= 10) {
//				printf("  ");
//			}
//			else {
//				printf("   ");
//			}
//			i++;
//		}
//		printf("\n");
//		j++;
//	}
//	return 0;
//}


 
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);//读入一个位数x
//	int first = 1;
//	int b = 1;
//	while (b < x)//得到那个10^(x-1)
//	{
//		first *= 10;
//		b++;
//	}
//	int i = first;//令i从10^(x-1)开始
//	while (i < first * 10)//遍历10^(x-1)至10^x之间的数
//	{
//		int c = i;//把它代替i拿去分解
//		int sum = 0;
//		while (c > 0)//分解
//		{
//			int d = c % 10;
//			c /= 10;
//			int j = 1;
//			int p = d;
//			while (j < x)//得到分解的数的x次方
//			{
//				p *= d;
//				j++;
//			}
//			sum += p;//分解后求和
//		}
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int i, j, k;
//	int cnt = 0;
//	for (i = x;i <= x + 3;i++)
//	{
//		for (j = x; j <= x + 3; j++)
//		{
//			for (k = x; k <= x + 3; k++)
//			{
//				if (i != j && j != k && i != k)
//				{
//					cnt++;
//					printf("%d%d%d", i, j, k);
//					if (cnt < 6)
//					{
//						printf("  ");
//					}
//					else
//					{
//						printf("\n");
//						cnt = 0;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	int x;
//	int count[10];
//	for (i = 0; i < 10; i++) {
//		count[i] = 0;
//	}
//	scanf("%d", &x);
//	while (x != -1) {
//		count[x]++;
//		scanf("%d", &x);
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d出现了%d次\n", i, count[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//int search(int x, int a[], int length);
//int main(void)
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	int loc = 0;
//	int x;
//	printf("请输入一个数字（0到10）\n");
//	scanf("%d", &x);
//	loc = search(x, a, sizeof(a) / sizeof(a[0]));
//	if (loc != -1) {
//		printf("%d在数组中的第%d位", x, loc);
//	}
//	else {
//		printf("%d不在数组中", x);
//	}
//	return 0;
//}
//int search(int x, int a[], int length)
//{
//	int i;
//	int ret = -1;
//	for (i = 0; i < length; i++) {
//		if (a[i] == x) {
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int number;
//	int i;
//	int *a;
//	printf("输入数量\n");
//	scanf("%d", &number);
//	a = (int*)malloc(number * sizeof(int));
//	for (i = 0; i < number; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = number - 1; i >= 0; i--)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}



//冒泡排序
//#include<stdio.h>
//int main(void)
//{
//	int i,j,k,a[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (j = 0; j < 9; j++)
//	{
//		for (i = 0; i < 9-j; i++)
//		{
//			if (a[i] > a[i+1])
//			{
//				k = a[i];
//				a[i] = a[i + 1];
//				a[i+1] = k;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//函数的递归
//#include<stdio.h>
//int findMax(int arr[], int star, int end);
//int main(void)
//{
//	int max, a[5] = {1,2,6,4,5};
//	max = findMax(a,1,4 );
//	printf("%d", max);
//	return 0;
//}
//
//int findMax(int arr[], int star, int end)
//{
//	if (star == end) {
//		return arr[star];
//	}
//	else {
//		int a = arr[star];
//		int b = findMax(arr, star + 1, end);
//		if (a > b) {
//			return a;
//		}
//		else {
//			return b;
//		}
//	}
//}





//冒泡排序递归版本

//#include<stdio.h>
//
//void DGPX(int arr[],int star,int end)
//{
//	if (star < end) {
//		int i;
//		for (i = 0; i <= end - 1; i++)
//		{
//			if (arr[i] > arr[i + 1]) {
//				int change = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = change;
//			}
//		}
//		 DGPX(arr, star, end-1);
//	}
//}
//int main(void)
//{
//	int i;
//	int arr[] = { 7 , 2 , 7 , 8 , 6 , 9 };
//    DGPX(arr,0,5);
//	for (i = 0; i < 6; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//#include<stdio.h>
//int sum(int arr[], int star, int end);
//int main(void)
//{
//	int arr[5] = { 1 ,2 ,33 ,7 ,44 };
//	printf("%d", sum(arr, 0, 4));
//	return 0;
//}
//
//
//int sum(int arr[], int star, int end)
//{
//	if (star = end) {
//		return arr[star];
//	}
//	else {
//		return arr[star] + sum(arr, star + 1, end);
//	}
//}




//递归函数写斐波那契数列
//#include<stdio.h>
//int Fibonacii(int n);
//int main(void)
//{
//	int n;
//	printf("你想要查找的斐波那契数列的项数为：\n");
//	scanf("%d", &n);
//	printf("该项为：%d", Fibonacii(n));
//	return 0;
//}
//
//int Fibonacii(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else {
//		return (Fibonacii(n - 1) + Fibonacii(n - 2));
//	}
//}




//
//#include<stdio.h>
//void increment(int** pointer, int arr[]);
//int main(void)
//{
//	int arr[] = { 7,2,7,8,6,9 };
//	int* p = &arr[0];
//	printf("%d", *p);
//	increment(&p, arr);
//	printf("%d", *p);
//	return 0;
//}
//void increment(int** pointer, int arr[])
//{
//	*pointer = &arr[1];
//}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int compare_float(const void* e1, const void* e2)
{
	if ((*(float*)e1 - *(float*)e2) > 0)
	{
		return 1;
	}
	else if (*(float*)e1 = *(float*)e2)
	{
		return 0;
	}
	else {
		return -1;
	}
}

int compare_char(const void* e1, const void* e2)
{
	return strcmp(*(char*)e1, *(char*)e2);
}


void swap(char* e1, char* e2, int width)
{
	int i;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1++ = *e2;
		*e2++ = tmp;
	}
}



void my_qsort(void* base, int num, int width, int(*compare)(const void* e1, const void* e2))
{
	int i;
	for (i = 0; i < num - 1; i++)
	{
		int j;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
			

}


int main()
{
	int i = 0;
	//char arr[] = {'f','e','d','c','b','a'};
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), compare_char);
	//qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), compare_int);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}
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
////��fahr=0,20,...,300ʱ���ֱ��ӡ�����¶��������¶ȶ��ձ�
//int main()
//{
//	int fahr, celsius;
//	int lower, upper, step;
//	lower = 0;//�¶ȱ������
//	upper = 300;//�¶ȱ������
//	step = 20;//����
//	fahr = lower;
//	while (fahr <= upper) {celsius = 5 * (fahr - 32) / 9;
//	printf("%3d %6d\n", fahr, celsius);
//		fahr = fahr + step;
//	   }
//	}


//#include <stdio.h>
////��fahr=0,20,...,300ʱ���ֱ��ӡ�����¶��������¶ȶ��ձ�;�������汾
//int main()
//{
//	float fahr, celsius;
//	int lower, upper, step;
//	lower = 0;//�¶ȱ������
//	upper = 300;//�¶ȱ������
//	step = 20;//����
//	fahr = lower;
//	while (fahr <= upper) {
//		celsius = (5.0/9.0) * (fahr - 32.0);
//		printf("%3.0f %6.1f\n", fahr, celsius);
//		fahr = fahr + step;
//	}
//}


//#include <stdio.h>
////��ӡ�����¶�-�����¶ȶ��ձ�
//mian()
//{
//	int fahr;
//	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr-32));//�����������
//}


//#include <stdio.h>
//#define LOWER 0//�¶ȱ�����
//#define UPPER 300//�¶ȱ�����
//#define STEP 20//����
////��ӡ�����¶�-�����¶ȶ��ձ�
//main()
//{
//	int fahr;
//	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
//}

//
//#include <stdio.h>
////�����븴�Ƶ�������汾1
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
//	printf("�ϴ�ѧ\n");
//	while (line <= 11)
//	{
//		line++;
//		printf("��һ�д���:%d\n",line);
//	}
//	if(line>=20)
//    printf("��offer\n");
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
//	printf("����������ʱ�� �� 2 30 2 40 ��ʾ2��30��2��40\n");
//		scanf("%d %d", &hour1,&minute1);
//	    scanf("%d %d", &hour2,&minute2);
//		int time1 = hour1 * 60 + minute1;
//		int time2 = hour2 * 60 + minute2;
//		int time3 = time1 - time2;
//		printf("ʱ�����%dʱ%d��",time3 / 60, time3 % 60);
//	return 0;
//}




//�ɼ��ȼ������

//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	printf("������ɼ�:\n");
//	scanf("%d", &score);
//	printf("������ĳɼ���%d\n�ȼ�Ϊ:", score);
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

//����Ĵ���ȼ����������

//# include <stdio.h>
//int main()
//{
//	int grade = 0;
//	printf("������ɼ�(0��100��\n");
//	scanf("%d", &grade);
//	grade /= 10;
//	printf("�ȼ�Ϊ��"); 
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


//4λ������������

//#include<stdio.h>
//int main()
//{
//	int num1, num2;
//	int g, s, b, q;
//	printf("������һ����λ��\n");
//	scanf("%d", &num1);
//	g = num1 / 1000;
//	s = (num1 / 100) % 10;
//	b = (num1 % 100) / 10;
//	q = num1 % 10;
//	num2 = g + s * 10 + b * 100 + q * 1000;
//	printf("����������Ϊ(0����Ϊ��λ�� % d", num2);
//		return 0;
//}



//λ������

//#include<stdio.h>
//int main()
//{
//	int numble;
//	int ws = 1;
//	printf("������λ��\n");
//	scanf("%d", &numble);
//	while (numble >= 10)
//	{
//		numble /= 10;
//		ws ++;
//	}
//	printf("������λ����%d",ws);
//		return 0;
//}


//do while����
//#include<stdio.h>
//int main()
//{
//	int numble;
//	int ws = 0;
//	printf("������һ����\n");
//	scanf("%d", &numble);
//	do{
//		numble /= 10;
//		ws++;
//	} while (numble > 0);
//	printf("������λ����%d", ws);
//	return 0;
//}


//������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand(time(0));
//	int a = rand()%100+1;//�����
//	int c = 0;//��µ���
//	int b = 0;//��µĴ���
//	printf("###������Ϸ###\n");
//	printf("���Ѿ������һ�����������һ��\n");
//	do
//	{
//		scanf("%d",&c );
//		b ++;
//		if (c < a) {
//			printf("���С��\n");
//		}
//		else if (c > a) 
//		{ printf("��´���\n"); }
//	} while (c != a);
//	printf("��ϲ��¶��ˣ���һ������%d��", b);
//	return 0;
//}


//��ƽ����
//#include<stdio.h>
//int main()
//{
//	int a;//�������
//	int b = -1;//��¼����Ĵ���
//	int sum = 0;//��¼��������ܺ�
//	printf("###��ƽ����###\n");
//	printf("������һ�������ڽ���ʱ����0\n");
//	do
//	{
//		scanf("%d", &a);
//		b++;
//		sum += a;
//	} while (a != 0);
//	printf("��������ƽ�����ǣ�%f", sum*0.1 / b);
//	return 0;
//}


//����������������
//#include<stdio.h>
//int main()
//{
//	printf("###������������###\n");
//	int a;//�������������ȥ����
//	int digit = 0;//��¼��ÿ��ȡ���������Ǹ���
//	int ret = 0;//��¼������
//	printf("������һ��������\n");
//    scanf("%d", &a);
//	printf("%d�������� ��",a);
//	while (a > 0) {
//		digit = a%10;
//		ret = ret * 10 + digit;
//		a /= 10;}
//	printf("%d", ret);
//	return 0;
//}


//forѭ����׳˼���
//#include<stdio.h>
//int main()
//{
//	printf("###�׳˼���###\n������һ��������\n");
//	int n;//���������
//	int ret = 1;//��¼�׳�
//	scanf("%d", &n);
//	for (int jsq = 1/*forѭ��������*/; jsq <= n; jsq++) {
//		ret *= jsq;
//	}
//	printf("%d��= %d", n, ret);
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

//�����ж�
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
//		printf("%d��������", a);
//	}
//	else printf("%d������", a);
//	return 0;
//}

//��ӡ99�˷���
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
//	scanf("%d", &x);//����һ��λ��x
//	int first = 1;
//	int b = 1;
//	while (b < x)//�õ��Ǹ�10^(x-1)
//	{
//		first *= 10;
//		b++;
//	}
//	int i = first;//��i��10^(x-1)��ʼ
//	while (i < first * 10)//����10^(x-1)��10^x֮�����
//	{
//		int c = i;//��������i��ȥ�ֽ�
//		int sum = 0;
//		while (c > 0)//�ֽ�
//		{
//			int d = c % 10;
//			c /= 10;
//			int j = 1;
//			int p = d;
//			while (j < x)//�õ��ֽ������x�η�
//			{
//				p *= d;
//				j++;
//			}
//			sum += p;//�ֽ�����
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
//		printf("%d������%d��\n", i, count[i]);
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
//	printf("������һ�����֣�0��10��\n");
//	scanf("%d", &x);
//	loc = search(x, a, sizeof(a) / sizeof(a[0]));
//	if (loc != -1) {
//		printf("%d�������еĵ�%dλ", x, loc);
//	}
//	else {
//		printf("%d����������", x);
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
//	printf("��������\n");
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



//ð����������
//#include<stdio.h>
//int main(void)
//{
//	int i,j,k,a[10];
//	for (i = 0; i < 10; i++)//ʮ����
//	{
//		scanf("%d", &a[i]);
//	}
//	for (j = 0; j < 9; j++)//9��ð������
//	{
//		for (i = 0; i < 9-j; i++)//ÿһ�˵Ĺ���
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



//�����ĵݹ�
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





//ð������ݹ�汾

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




//�ݹ麯��д쳲���������
//#include<stdio.h>
//int Fibonacii(int n);
//int main(void)
//{
//	int n;
//	printf("����Ҫ���ҵ�쳲��������е�����Ϊ��\n");
//	scanf("%d", &n);
//	printf("����Ϊ��%d", Fibonacii(n));
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

//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int compare_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int compare_float(const void* e1, const void* e2)
//{
//	if ((*(float*)e1 - *(float*)e2) > 0)
//	{
//		return 1;
//	}
//	else if (*(float*)e1 = *(float*)e2)
//	{
//		return 0;
//	}
//	else {
//		return -1;
//	}
//}
//
//int compare_char(const void* e1, const void* e2)
//{
//	return strcmp(*(char*)e1, *(char*)e2);
//}
//
//
//void swap(char* e1, char* e2, int width)
//{
//	int i;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1++ = *e2;
//		*e2++ = tmp;
//	}
//}
//
//
//
//void my_qsort(void* base, int num, int width, int(*compare)(const void* e1, const void* e2))
//{
//	int i;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//			
//
//}
//
//
//int main()
//{
//	int i = 0;
//	//char arr[] = {'f','e','d','c','b','a'};
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), compare_char);
//	//qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), compare_int);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdbool.h>
//
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//
//bool Isleap(struct date t);
//int numberofdays(struct date t);
//void output(struct date *p);
//
//int main()
//{
//	struct date today;
//	struct date tomorrow;
//	printf("Enter the (y,m,d) \n");
//	scanf("%i %i %i",&today.year,&today.month,&today.day);
//	if (today.day != numberofdays(today))
//	{
//		tomorrow.day = today.day + 1;
//		tomorrow.year = today.year;
//		tomorrow.month = today.month;
//	}
//	else if (today.month == 12)
//	{
//		tomorrow.year = today.year + 1;
//		tomorrow.day = 1;
//		tomorrow.month = 1;
//	}
//	else
//	{
//		tomorrow.month = today.month + 1;
//		tomorrow.year = today.year;
//		tomorrow.day = 1;
//	}
//	printf("tomorrow is ");
//	output(&tomorrow);
//	printf("\n");
//	return 0;
//}
//
//bool Isleap(struct date t)
//{
//	bool leap = false;
//	if (t.year % 4 != 0 && t.year % 100 != 0 || t.year % 400 == 0)
//	{
//		bool leap = true;
//	}
//	return leap;
//}
//
//int numberofdays(struct date t)
//{
//	int day;
//	const int everymonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//	if (t.month == 2 && Isleap(t))
//	{
//		day = 28;
//	}
//	day = everymonth[t.month - 1];
//	return day;
//}
//
//void output(struct date* p)
//{
//	printf("%i-%i-%i",p->year, p->month, p->day);
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for(i = 0;i<5;i++)
//	{
//		printf("%d", i);
//	}
//	printf("%d", i);
//	return 0;
//}

//�����ж�
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
//		printf("%d��������", a);
//	}
//	else printf("%d������", a);
//	return 0;
//}


//շת�����
//#include<stdio.h>
//
//int gcd(int x, int y)
//{
//	int ret = 0;
//	while (x % y != 0)
//	{
//		ret = x % y;
//		x = y;
//		y = ret;
//	}
//	return ret;
//}
//int main()
//{
//	int a, b = 0;
//	printf("����������������\n");
//	scanf("%d %d",&a,&b);
//	printf("���ǵ����Լ��Ϊ ��%d",gcd(a,b));
//	return 0;
//}

//������
//


//��ӡ99�˷���
//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d   ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ��Խ���60���ػ��������룺�ú�ѧϰ����ȡ���ػ�\n");
//    scanf("%s", input);
//	if (strcmp(input, "�ú�ѧϰ") == 0)
//	{
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}


//쳲���������
//#include<stdio.h>
//int Fib(int n)//�ݹ鷨
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else {
//		return 1;
//	}
//}

//int Fib(int n)//ѭ���ķ���
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("1 1 2 3 5 8 13 21 34 55 ...\n");
//	printf("��n��쳲�������Ϊ > %d\n ", Fib(n));
//	return 0;
//}



//��ŵ������

//#include<stdio.h>
//
//void move(char a, char b)
//{
//	printf("%c->%c ", a, b);
//}
//
//void hanoi(int n, char column1, char column2, char column3)
//{
//	if (n == 1)
//	{
//		move(column1, column3);
//	}
//	else {
//		hanoi(n - 1,column1,column3,column2);
//		move(column1, column3);
//		hanoi(n - 1,column2,column1,column3);
//	}
//}
//int main()
//{
//	hanoi(2,'A','B','C');
//	return 0;
//}

 //ð������
#include<stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//sz������ȷ����sz-1������
	{
		int judge = 1;//�����Ѿ��ź���
		int j = 0;
		for (j = 0; j < sz-1-i; j++)//ÿһ��ð������Ĺ���
		{
			if (arr[j] > arr[j + 1])
			{
				int swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
				judge = 0;//�жϽ���˵����û�ź�
			}
		}
		if (judge)
		{
			break;
		}
	}
}

int main()
{
	int n = 0;
	int arr[10] = { 9,8,7,6,1,5,4,1,2,1};
	int  sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (n = 0; n < sz; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 }, i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(arr + i) = i + 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}













#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Ԥ�������
#define MAX 100

/*#ifndef XXX
#define XXX
#endif*/

#pragma warning(disable:4996)


int MyMax(int x, int y)
{
	if (x > y){
		return x;
	}

	return y;
	//else if (x < y){
	//	return y;
	//}
	//else{
	//	return x;
	//}
}

//return 0: no
//retunr 1: yes
int is_prime_number(int n)
{
	int i = 2;
	//2..n-1
	//100
	//4 * 25
	//25 * 4
	//10 * 10
	for (; i <= (int)sqrt(n); ++i){ //2,3,4,5,6,7,8,9, n = x * y
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

void Menu()
{
	printf("########################\n");
	printf("## 1. Guess   0. Exit ##\n");
	printf("########################\n");
	printf("Please Select# ");
}

void Game()
{
	int n = 0;
	int count = 0;
	int data = rand() % 100 + 1;
	do{
		count++;
		printf("Please Guess# ");
		scanf("%d", &n);
		if (n < data){
			printf("��µ�С��!\n");
		}
		else if (n > data){
			printf("��´���!\n");
		}
		else{
			printf("��ϲ�㣬�¶��ˣ������� %d, ���� %d �λ��� \n", n,count);
			break;
		}
	} while (1);

}
int main()
{
	int quit = 0;
	srand((unsigned long)time(NULL));
	while (!quit){
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			break;
		case 0:
			quit = 1;
			break;
		default:
			printf("select error!\n");
			break;
		}
		printf("��ϲ����ɣ�Ҫ��Ҫ�ٸ�һ��!\n");
	}
	printf("byebye!\n");


	//���ֲ��ң�������������������У���
	//��д������һ���������������в��Ҿ����ĳ����
	// 1,2,3,4,5,6,7,8,9,10
	//x
	//int arr[] = {1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77};
	//int num = sizeof(arr) / sizeof(arr[0]);
	//int n = 22;

	//int start = 0;
	//int end = num - 1;
	//while (start <= end){
	//	int mid = (start + end) / 2; //bug?
	//	if (n < arr[mid]){
	//		end = mid-1;
	//	}
	//	else if (n > arr[mid]){
	//		start = mid + 1;
	//	}
	//	else{
	//		printf("found it!, index:%d\n", mid);
	//		break;
	//	}
	//}


	// 1*1=1
	// 2*1=2 2*2=4
	//...... 
	//int i = 1;
	////�ڼ���
	//for (; i <= 9; i++){
	//	//�������
	//	int j = 1;
	//	for (;j <= i;j++){
	//		printf("%d*%d=%-2d ", i, j, i*j);
	//	}
	//	printf("\n");
	//}
	//int arr[] = { 3, 34, 34, 45, 3, 45, 56, 645, 234, 23, 45, 345, 34, 234, 234, 9090 };
	//int num = sizeof(arr) / sizeof(arr[0]);

	//int i = 1;
	//int max = arr[0];
	//for (; i < num; i++){
	//	if (max < arr[i]){
	//		max = arr[i];
	//	}
	//}

	//printf("max = %d\n", max);

	//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
	//double result = 0.0;

	//int i = 1;
	//int flag = 1;
	//for (; i <= 100; i++){
	//	result += (flag * 1.0) / i;
	//	flag = -flag;
	//}
	//printf("%lf\n", result);

	//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
	//int n = 1;
	//int count = 0;
	//for (; n <= 100; n++){
	//	if (n % 10 == 9){
	//		count++;
	//	}
	//	int m = n / 10;
	//	if (m % 10 == 9){
	//		count++;
	//	}
	//}
	//printf("%d\n", count);

	//дһ�����룺��ӡ100~200֮�������
	//int i = 100;
	//for (; i <= 200; i++){
	//	if (is_prime_number(i)){
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");

	//��ӡ1000�굽2000��֮�������
	//int year = 1000;
	//for (; year <= 2000; year++){
	//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
	//		printf("%d ", year);
	//	}
	//}
	//���������������������������Լ��
	//	���磺
	//	���룺20 40
	//	�����20
	// x, y n*x(T+T+T..+T)+m*y(T+T..+T) % T == 0
	// x / y = v ... w
	//x = v*y + w ==> w = 1 * x  + (-v) * y;
	// w =  x % y : ������Ҳһ���ܹ�����������������Լ��
	//x > y
	//x = x % y, x ���С�ˣ�x < y
	//y =  y % x
	//int x = 75;
	//int y = 100;
	//int z = 0;

	//while (x*y !=0){
	//	if (x > y){
	//		x %= y;
	//	}
	//	else if (x < y){
	//		y %= x;
	//	}
	//	else{
	//		break;
	//	}
	//}
	//printf("%d\n", x == 0 ? y : x);

	//if (x < y){
	//	int temp = x;
	//	x = y;
	//	y = temp;
	//}

	//while (z = x % y){
	//	x = y;
	//	y = z;
	//}

	//printf("%d\n", y);




	//int a = 0, b = 0;
	//for (a = 1, b = 1; a <= 100; a++)
	//{
	//	if (b >= 20) break;
	//	if (b % 3 == 1)
	//	{
	//		b = b + 3; //1,4,7,10,13,16,19,22
	//		continue;
	//	}
	//	b = b - 5;
	//}
	//printf("%d\n", a);
	//int i = 0;
	//while (printf("."),i < 3){
	//	printf("%d \n", i);
	//	i++;
	//}
	//int x = 3;
	//int y = 3;
	//switch (x % 2) { //1
	//case 1:
	//	switch (y)
	//	{
	//	case 0:
	//		printf("first");
	//	case 1:
	//		printf("second");
	//		break;
	//	default: printf("hello");
	//	}
	//case 2:
	//	printf("third");
	//}
	//int a = 1;
	//int b = 0;
	//switch (a)
	//{
	//case 1: b = 30;
	//case 2: b = 20;
	//case 3: b = 16;
	//default: b = 0;
	//}
	//printf("%d\n", b);


	//д���뽫�������������Ӵ�С�����
	//int a = 0;
	//int b = 0;
	//int c = 0;

	//scanf("%d %d %d", &a, &b, &c);

	//if (a < b){
	//	int temp = a;
	//	a = b;
	//	b = temp;
	//}
	////a b c
	//if (a < c){
	//	int temp = a;
	//	a = c;
	//	c = temp;
	//}

	////aһ�������ģ���
	////a bc
	//if (b < c){
	//	int temp = b;
	//	b = c;
	//	c = temp;
	//}

	//printf("%d %d %d\n", a, b, c);

	//дһ�������ӡ1 - 100֮������3�ı���������
	//int i = 1;
	//for (; i <= 100; ++i){
	//	if (!(i % 3)){
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");
	//int i = 0;
	//for (i = 0; i<10; i++,printf("%d ", i))
	//{
	//	//1. �ֽ������ڵı��ʽ����ϣ����������
	//	//2. ���ж����н���Ƿ�Ϊ��/��
	//	if (5 = i ) //0�٣���0��
	//		printf("%d ", i);
	//	Sleep(1000);
	//}
	//int a = 10;

	//int *p = NULL;


	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(int*));	
	//printf("%d\n", sizeof(double*));	

	//int arr[10] = { 0 };
	//char ch[] = "hello bitfffff";
	//int x = 0;
	//int y = 0;
	//printf("Please Enter Data<x, y># ");
	//scanf("%d %d", &x, &y);

	//int z = MyMax(x, y);
	//printf("max = %d\n", z);



	//1*8^2 + 2 * 8 + 1 = 64 + 16 + 1 = 81
	//6*16+5 = 96+5 = 101
	//printf("%s", "c:\test\x65"); //\�˽��� \xʮ�����ƣ���ʾ�Ķ���һ���ַ�
	//printf("%d\n", strlen("c:\test\121"));
	//printf("%d\n", ' ');
	//char arr[] = { 'b', 'i', 't' };
	//printf("%d\n", strlen(arr));

	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <windows.h>
//
////int num = 10;
//
//int main()
//{
//	int num = 1; //��ʱ�������ֲ��������Զ�����
//
//	int i = 10;
//	while (i > 0){
//		int x = 100;//��ʱ�������ֲ��������Զ�����
//		printf("%d\n", i);
//		i--;
//	}
//	printf("x = %d\n", x);
//
//	printf("num = %d\n", num);
//
//
//
//
//	system("pause");
//	return 0;
//}
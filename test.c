 #pragma warning(disable:4996) 
//反向输出4位数
#include <stdio.h>
int main()
{
	//计算一个整数的商和余数
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int merchant = a / b;//商
	//int remainder = a%b;//余数
	//printf("%d %d", merchant, remainder);
	//计算表达式的值
	/*int a = 40;
	int c = 212;
	int sum = (-8 + 22)*a - 10 + c / 2;
	printf("%d", sum);*/
	//输出对应字符的ASCII码
	//char ch = 0;
	//scanf("%c", &ch);
	//printf("%d\n", ch);//错误点，直接char = 0;&char,char了
	//void swap(int *a, int *b)
	//{
	//	int tmp = *a;
	//	*a = *b;
	//	*b = tmp;
	//}
	//int a = 0;
	//int b = 0;
	//scanf("a=%d,b=%d", &a, &b);//swap函数可以实现，输入的格式可以这样，牛客上不能多引入不相关的头文件
	////int tmp = a;
	////a = b;
	////b = tmp;
	//swap(&a, &b);
	//printf("a=%d,b=%d\n", a, b);
	//用循环多组输出整型，输出为2的n次方，不用累乘
	/*int ch = 0;
	while ((scanf("%d", &ch)) != EOF)
	{
		printf("%d\n", 1 << ch);
	}*/
	//本地的难点在于如何按照指定域宽读取数据，如何按照指定格式打印数据。
	//int year = 0;
	//int month = 0;
	//int date = 0;
	//scanf("%4d%2d%2d", &year, &month, &date);//%4d就是读取4位整数
	//printf("year=%d\n", year);
	//printf("month=%02d\n", month);//输出不够2位时左边拿0补充
	//printf("date=%02d\n", date);
	//char a[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };//int 和char 都可以
	//int i = 0;
	////计算数组元素个数
	//int sz = sizeof(a) / sizeof(a[0]);
	////循环遍历输出每个元素
	//for (i = 0; i<sz; i++)
	//{
	//	printf("%c", a[i]);//每个字符不要隔开
	//}
	//char n = 0;
	//scanf("%c", &n);//输入的是字符金字塔
	//int i = 0;
	//for (i = 0; i<5; i++)
	//{
	//	//处理一行
	//	//空格
	//	int j = 0;
	//	for (j = 0; j<5 - i - 1; j++)
	//	{
	//		printf(" ");
	//	}
	//	//字符
	//	for (j = 0; j <= i; j++)
	//	{
	//		printf("%c ", n);//字符后面的空格易忘记，输出格式应该也为字符
	//	}
	//	printf("\n");
	//}
		//int ch = 0;
		//while ((ch = getchar()) != EOF)
		//{
		//	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z'))//容易敲错或者忘掉
		//		printf("YES\n");
		//	else
		//		printf("NO\n");
		//	getchar();
		//}
	//int StuId = 0;
	//float Clanguage = 0.0;
	//float Math = 0.0;
	//float English = 0.0;
	//scanf("%d;%f,%f,%f", &StuId, &Clanguage, &Math, &English);//注意输入的格式
	//printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", //注意%2f与%.2f的区别
	//	StuId, Clanguage, Math, English);
	//printf("\n%d\n", printf("Hello world!"));
	//int ret = printf("Hello world!");//printf函数返回值是字符串长度，调用的同时并返回一个值
	//printf("\n");
	//printf("%d\n", ret);
	//printf("%15d\n", 0XABCDEF);
	//大小写转换
	//int ch = 0;
	//while ((ch = getchar())!= EOF)
	//{
	//	printf("%c\n",(ch+32));
	//	getchar();//行缓冲区，再次调用吸收掉\n字符
	//}
	/*int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf("%d ", n % 10);
		n /= 10;
	}*/
	return 0;
}

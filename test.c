#include <stdio.h>
#include <windows.h>

void SwapData(int arr[], int num)
{
	//1,2,3,4,5,6,7,8,9
	int start = 0;
	int end = num - 1;
	while (start < end){
		while (start < end && (arr[start] & 1 )){
			start++;
		}
		while (start < end && !(arr[end] & 1) ){
			end--;
		}
		if (start < end){
			arr[start] ^= arr[end];
			arr[end] ^= arr[start];
			arr[start] ^= arr[end];
			start++, end--;
		}
	}
}

#define SIZE 10
void ShowYang()
{
	int yang[SIZE][SIZE] = {0};
	int i = 0;
	for (; i < SIZE; i++){
		int j = 0;
		for (; j < SIZE; j++){
			if (j == 0 || j == i){
				yang[i][j] = 1;
			}
			//if (j == 0){
			//	yang[i][j] = 1;
			//}
			//if (i == j){
			//	yang[i][j] = 1;
			//}

		}
	}
	
	for (i = 2; i < SIZE; i++){
		int j = 1;
		for (; j < i ; j++){
			yang[i][j] = yang[i - 1][j] + yang[i - 1][j - 1];
		}
	}

	//For test
	for (i = 0; i < SIZE; i++){
		int j = SIZE - i;
		for (; j > 0; j--){
			printf(" ");
		}
		for (j=0; j <= i; j++){
			printf("%2d", yang[i][j]);
		}
		printf("\n");
	}
}
char FindKiller()
{
	//题目名称:
	//	猜凶手
	//	题目内容 :
	//	日本某地发生了一件谋杀案，
	//	警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
	//	以下为4个嫌疑犯的供词 :
	//	    A说：不是我。
	//		B说：是C。
	//		C说：是D。
	//		D说：C在胡说
	//		已知3个人说了真话，1个人说的是假话。
	//		现在请根据这些信息，写一个程序来确定到底谁是凶手。
	char killer = 'A';
	for (; killer <= 'D'; killer++){
		if (((killer != 'A') + \
			(killer == 'C') + \
			(killer == 'D') + \
			(killer != 'D')) == 3){
			return killer;
		}
	}
}
void ShowRank()
{
	//题目名称:
	//	猜名次
	//	题目内容 :
	//	5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
	//		A选手说：B第二，我第三；
	//		B选手说：我第二，E第四；
	//		C选手说：我第一，D第二；
	//		D选手说：C最后，我第三；
	//		E选手说：我第四，A第一；
	//		比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
	int a = 1;
	for (; a <= 5; a++){
		int b = 1;
		for (; b <= 5; b++){
			int c = 1;
			for (; c <= 5; c++){
				int d = 1;
				for (; d <= 5; d++){
					int e = 1;
					for (; e <= 5; e++){
						//
						if (((b == 2) + (a == 3)) == 1 && \
							((b == 2) + (e == 4)) == 1 && \
							((c == 1) + (d == 2)) == 1 && \
							((c == 5) + (d == 3)) == 1 && \
							((e == 4) + (a == 1)) == 1 ){
							
							unsigned char flags = 0;
							//0000 0001
							//0000 0100 |
							//0000 0101
							flags |= (1 << (a - 1));
							flags |= (1 << (b - 1));
							flags |= (1 << (c - 1));
							flags |= (1 << (d - 1));
							flags |= (1 << (e - 1));
							if (flags == 0x1F){
								printf("a: %d, b: %d, c: %d, d: %d, e: %d\n", a, b, c, d, e);
							}
							//if (flags == 0x1F || flags == 0xF || \
							//	flags == 0x7 || flags == 0x3 || \
							//	flags == 0x1){
							//	printf("a: %d, b: %d, c: %d, d: %d, e: %d\n", \
							//		a, b, c, d, e);
							//}
						}
					}
				}
			}
		}
	}
}

void Reverse(char str[], int start, int end)
{
	while (start < end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++, end--;
	}
}

void ShiftLeft(char arr[], int len, int num)
{
	num %= len;
	//abcd 1234
	//dcba 4321
	//1234abcd
	Reverse(arr, 0, num - 1); //[]
	Reverse(arr, num, len - 1);
	Reverse(arr, 0, len - 1);
	//version1
	/*while (num){
		char tmp = arr[0];
		int j = 0;
		for (; j < len - 1; j++){
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
		num--;
	}*/
}

int main()
{
	//字符串左旋
	//题目内容 :
	//实现一个函数，可以左旋字符串中的k个字符。
	//	例如：
	//	ABCD左旋一个字符得到BCDA
	//	ABCD左旋两个字符得到CDAB

	char arr[] = "abcd1234";
	int len = strlen(arr);

	printf("%s\n", arr);
	ShiftLeft(arr, len, 4);

	printf("%s\n", arr);

	




	//声明一个指向含有10个元素的数组的指针，
	//其中每个元素是一个函数指针，该函数的返回值是int，
	//参数是int*，正确的是（ ）

	//int aa[2][5] = { 10, 9, 8, 7, 6,   5, 4, 3, 2, 1 };
	//int *ptr1 = (int *)(&aa + 1);
	//int *ptr2 = *(aa + 1);
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));

	//int a[5] = { 5, 4, 3, 2, 1 };
	//int *ptr = (&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));

	//int(*)[10];

	//int(*(*p)[10])(int*)


	//int a;
	/*int a[];*/

	//int(*(*F)(int, int))(int);

	//int(*(*F)(int, int))(int)


	//如何定义一个int类型的指针数组，数组元素个数为10个
	//int *arr[10];
	//ShowRank();
	//char killer = FindKiller();
	//printf("%c\n", killer);
	
	//ShowYang();

	/*unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);*/
	//char a[1000] = { 0 };
	//int i = 0;
	//for (i = 0; i<1000; i++)
	//{
	//	a[i] = -1 - i;
	//}
	//printf("%d", strlen(a)); //255


	//调整数组使奇数全部都位于偶数前面
	//但是，不要影响原始数据，稳定的算法，插入思想！
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int num = sizeof(arr) / sizeof(arr[0]);
	//SwapData(arr, num);



	/*语言中哪一种形式声明了一个指向char类型变量的指针p，
		p的值不可修改，但p指向的变量值可修改*/

	//char c = 'a';
	//char *p = &c;

	//printf("hello bit1\n");
	//printf("hello bit2\n");

	//printf("hello bit3\n");

	//printf("hello bit4\n");

	//printf("hello bit5\n");

	//printf("hello bit6\n");

	system("pause");
	return 0;
}
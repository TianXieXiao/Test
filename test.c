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
	//��Ŀ����:
	//	������
	//	��Ŀ���� :
	//	�ձ�ĳ�ط�����һ��ıɱ����
	//	����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
	//	����Ϊ4�����ɷ��Ĺ��� :
	//	    A˵�������ҡ�
	//		B˵����C��
	//		C˵����D��
	//		D˵��C�ں�˵
	//		��֪3����˵���滰��1����˵���Ǽٻ���
	//		�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
	//��Ŀ����:
	//	������
	//	��Ŀ���� :
	//	5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
	//		Aѡ��˵��B�ڶ����ҵ�����
	//		Bѡ��˵���ҵڶ���E���ģ�
	//		Cѡ��˵���ҵ�һ��D�ڶ���
	//		Dѡ��˵��C����ҵ�����
	//		Eѡ��˵���ҵ��ģ�A��һ��
	//		����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
	//�ַ�������
	//��Ŀ���� :
	//ʵ��һ�����������������ַ����е�k���ַ���
	//	���磺
	//	ABCD����һ���ַ��õ�BCDA
	//	ABCD���������ַ��õ�CDAB

	char arr[] = "abcd1234";
	int len = strlen(arr);

	printf("%s\n", arr);
	ShiftLeft(arr, len, 4);

	printf("%s\n", arr);

	




	//����һ��ָ����10��Ԫ�ص������ָ�룬
	//����ÿ��Ԫ����һ������ָ�룬�ú����ķ���ֵ��int��
	//������int*����ȷ���ǣ� ��

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


	//��ζ���һ��int���͵�ָ�����飬����Ԫ�ظ���Ϊ10��
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


	//��������ʹ����ȫ����λ��ż��ǰ��
	//���ǣ���ҪӰ��ԭʼ���ݣ��ȶ����㷨������˼�룡
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int num = sizeof(arr) / sizeof(arr[0]);
	//SwapData(arr, num);



	/*��������һ����ʽ������һ��ָ��char���ͱ�����ָ��p��
		p��ֵ�����޸ģ���pָ��ı���ֵ���޸�*/

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
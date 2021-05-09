#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <windows.h>


//int FindData(int arr[][5], int row, int col, int target)
//{
//	int i = 0;
//	int j = col - 1;
//	while (i < row && j >= 0)
//	{
//		if (target > arr[i][j]){
//			i++;
//		}
//		else if (target < arr[i][j]){
//			j--;
//		}
//		else{
//			return arr[i][j];
//		}
//	}
//	return -1;
//}

//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//int main(int argc, char* argv[])
//{
//	struct tagTest1 //12
//	{
//		short a; //2
//		char d; // 2+1
//		long b; //3+1+4
//		long c; //3+1+4 + 4
//	};
//	struct tagTest2 //12
//	{
//		long b; //4
//		short c; //2
//		char d; //6 + 1
//		long a; //8 + 4
//	};
//	struct tagTest3 //16
//	{
//		short c; //2
//		long b; //2+2+ 4
//		char d; //8 + 1
//		long a; //12+ 4
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}
//#pragma pack()

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}

int FindTwoSingle(int arr[], int num, int *out_x, int *out_y)
{
	//1. �������, ������ͬ����^�Ľ����!= 0,�����
	//һ���ж�����Ϊ1�����,Ϊ1�ı���λ��֤���ˣ���ͬ���ݣ���λ���ǲ�ͬ�ġ�
	//2. ��ͬ�����ݣ����б���λ����һ���ģ�
	//3. ����1.�Ľ��ۣ����ղ�ͬ����λ���з���
	//�������ݸ��ԣ�a. ��ͬ�����ݣ�һ�����ֵ��˲�ͬ���顣b.��ͬ������һ����ͬһ��
	//a,b:���ж��ǳɶԵģ�ֻ��һ��������
	*out_x = 0;
	*out_y = 0;
	int i = 1;
	int result = arr[0];
	for (; i < num; i++){
		result ^= arr[i];
	}
	if (result == 0){
		return -1;
	}

	int flag = 0x1;
	while (1){
		if (flag & result){
			break;
		}
		flag <<= 1;
	}

	for (i = 0; i < num; i++){
		if (arr[i] & flag){
			//A
			*out_x ^= arr[i];
		}
		else{
			//B
			*out_y ^= arr[i];
		}
	}

	return 0;
}
//�����ڼ����ʱ��������⣡
//�����ʱ�򣬱�����Ϣ,���Բ������÷���ֵ�ж��ģ�

enum{
	OK,
	ERR,
};

int err_code = OK;

int my_atoi(const char *str)
{
	assert(str);
	const char *start = str;

	while (*start){
		if (isspace(*start)){
			start++;
		}
		else{
			break;
		}
	}
	if (*start == '\0'){
		err_code = ERR;
		return 0; //??
	}
	int flag = 1;
	if (*start == '-'){
		start++;
		flag = -flag;
	}
	else if (*start == '+'){
		start++;
	}
	else{
		//Do Nothing!
	}
	long long ret = 0; //"123"
	while (*start && isdigit(*start)){
		ret = ret * 10 + flag*(*start - '0');
		if (ret > INT_MAX || ret < INT_MIN){
			err_code = ERR;
			return 0; //??
		}
		start++;
	}

	return (int)ret;
}

int main()
{
	int a = my_atoi("0");
	if (err_code == OK){
		printf("%d\n", a);
	}
	else{
		printf("INVALID\n");
	}


	//ģ��ʵ��atoi
	//��Ŀ���� :
	//ģ��ʵ��atoi
	//�ο��� :
	//��atoi�Ĺ����ǣ��������ɼ��ַ���
	//�������Ż������ֿ�ʼת����ת�����������ַ�Ϊֹ��


	/*char buf[64];
	sprintf(buf, "hello : %d, hello : %c\n", 1234, 'A');*/
	//fprintf(stdout, "helloworld\n");
	//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
	//��дһ�������ҳ�������ֻ����һ�ε����֡�

	//long num = 0;
	//FILE *fp = NULL;
	//if ((fp = fopen("fname.dat", "r")) == NULL)
	//{
	//	printf("Can��t open the file! ");
	//	exit(0);
	//}
	//while (fgetc(fp) != EOF)
	//{
	//	num++;
	//}
	//printf("num=%d\n", num);
	//fclose(fp);

	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 123, -32 };
	//int num = sizeof(arr) / sizeof(arr[0]);
	//int x, y;
	//FindTwoSingle(arr, num, &x, &y);

	//printf("%d, %d\n", x, y);

	//Test();

	//���Ͼ���
	//��Ŀ���� :
	//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
	//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
	//Ҫ��ʱ�临�Ӷ�С��O(N);

	//int arr[][5] = {
	//	{ 1, 2, 3, 4, 5 },
	//	{ 6, 7, 8, 9, 10 },
	//	{ 66, 77, 88, 99, 100 },
	//	{ 666, 777, 888, 999, 1000 },
	//	{ 6666, 7777, 8888, 9999, 10000 },
	//};

	//int res = FindData(arr, sizeof(arr) / sizeof(arr[0]), 5, 78);

	//printf("res��%d\n", res);
	//union
	//{
	//	short k;
	//	char i[2];
	//}*s, a;
	//s = &a;
	//s->i[0] = 0x39;
	//s->i[1] = 0x38;
	//printf("%x\n", a.k);
	//return 0;

	system("pause");
	return 0;
}
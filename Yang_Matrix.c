 #pragma warning(disable:4996) 
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//#define ROW 3
//#define COL 3
//int Find(int a[ROW][COL], int *row, int *col, int n)
//{
//	*row = 0;
//	*col = COL-1;
//	while ((*row < ROW) && (*col >= 0))
//	{
//		if (a[*row][*col]>n)
//		{
//			(*col)--;                       //���Ҫ����()��--��++���ȼ�����*
//		}
//		else if (a[*row][*col] < n)
//		{
//			(*row)++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int row = 0;
//	int col = 0;
//	int n = 0;
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d", &n);
//	int ret = Find(a, &row, &col, n);
//	if (ret == 1)
//	{
//		printf("�ҵ��ˣ��ڵ�%d�е�%d�У�\n", row+1, col+1);
//	}
//	else
//		printf("δ�ҵ���\n");
//	return 0;
//}
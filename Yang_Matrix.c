 #pragma warning(disable:4996) 
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
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
//			(*col)--;                       //这个要加上()，--、++优先级高于*
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
//	printf("请输入要查找的数字：");
//	scanf("%d", &n);
//	int ret = Find(a, &row, &col, n);
//	if (ret == 1)
//	{
//		printf("找到了，在第%d行第%d列！\n", row+1, col+1);
//	}
//	else
//		printf("未找到！\n");
//	return 0;
//}
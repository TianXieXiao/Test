 #pragma warning(disable:4996)
#include <stdio.h>

//��Ŀ5
//KiKi�μ������ġ���ѧ������Ŀ��ԣ�������ж������е���߷֡�
//�Ӽ���������������������ʾ�ķ���������ж����е���߷֡�
//1. ��������
//2. ÿ���������3�����֣�������ֵ����Ϊ�ɼ������Ǹ��������Լ���max�ڳ���0.
int main()
{
	int score[3] = { 0 };
	int i = 0;
	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
	{
		int max_score = 0;
		for (i = 0; i < 3; i++)
		{
			if (score[i]>max_score)
			{
				max_score = score[i];
			}
		}
		printf("%d\n", max_score);
	}
	return 0;
}

//��Ŀ4
//KiKi��֪��һ����������ż�ԣ�������жϡ�
//�Ӽ�����������һ����������Χ-231~231-1��������ж�������ż�ԡ�
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		if (num % 2 == 0)
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
	}
	return 0;
}

//��Ŀ3
//KiKi��֪�����Ŀ��Է����Ƿ�ͨ����������жϡ��Ӽ�����������һ��������ʾ�ķ���������жϸ÷����Ƿ��ڼ���Χ�ڣ��������
//�������������ڵ���60�֣��������Pass�������������Fail����
int main()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		if (score >= 60)          //���ʡ�Ի����ţ�OJ������ͨ��
		{
			printf("Pass\n");
		}
		else
		{
			printf("Fail\n");
		}
	}
	return 0;
}

//��Ŀ2
//KiKi��֪�����Ŀ��Գɼ��Ƿ�������������жϡ�
//�Ӽ�������һ��������ʾ�ĳɼ�������жϳɼ��Ƿ���90~100֮�䣬
//������������Perfect����

//1. �������롣
//2. ��ѧ�е�90<=score<=100 ��д������C������ֱ��д����bug�ġ�
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (90 <= n&&n <= 100)
			printf("Perfect");
	}
	return 0;
}

//��Ŀ1
//��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�����һ��������ʾһ���˵����̣�
//������ڵ���140�����������һ����ţ������Genius����

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)//����д������Ϊscanf��ȡʧ�ܷ���EOF,EOF��-1�����԰�λȡ����Ľ����0,0Ϊ�٣�������ѭ��ֹͣ��
	{
		if (n >= 140)
			printf("Genius");
	}
	return 0;
}
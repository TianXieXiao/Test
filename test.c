 #pragma warning(disable:4996)
#include <stdio.h>
/*
//��Ŀ13
//KiKi����ĳ��ĳ���ж����죬
//��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
int main()
{
	int year = 0;
	int month = 0;
	while (scanf("%d %d", &year, &month) != EOF)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			if (month == 2)
			{
				printf("%d\n", 29);
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				printf("%d\n", 30);
			}
			else
			{
				printf("%d\n", 31);
			}
		}
		else
		{
			if (month == 2)
			{
				printf("%d\n", 28);
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				printf("%d\n", 30);
			}
			else
			{
				printf("%d\n", 31);
			}
		}
	}
	return 0;
}
int main()
{
	int y = 0;
	int m = 0;
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	while (scanf("%d%d", &y, &m) != EOF)
	{
		int day = days[m - 1];
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			if (m == 2)
				day += 1;
		}
		printf("%d\n", day);
	}
	return 0;
}

//��Ŀ12
//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not
//quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4ac������������㲢������̵ĸ���
#include <math.h>
int main()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float state = 0.0;
	while (scanf("%f %f %f", &a, &b, &c) != EOF)
	{
		if (a != 0)
		{
			state = b*b - 4 * a*c;
			if (state > 0.0)
			{
				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(state)) / (2 * a),
					(-b + sqrt(state)) / (2 * a));
			}
			else if (state < 0.0)
			{
				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
					(-b) / (2 * a), sqrt(-state) / (2 * a),
					(-b) / (2 * a), sqrt(-state) / (2 * a)); //�鲿��д��
			}
			else
			{
				printf("x1=x2=%.2f\n", (-b) / (2 * a));
			}
		}
		else
		{
			printf("Not quadratic equation\n");
		}
	}
	return 0;
}

//��Ŀ11
//�ڼ���BMI��BodyMassIndex ����������ָ�����İ��������ϣ��ж��������ݳ̶ȡ�
//BMI�й���׼���±���ʾ��
int main()
{
	float height = 0;//����д��int �����ڽ���(float)weightת�����ȣ�����ֶ�ʧ
	float weight = 0;
	float bmi = 0.0;
	while (scanf("%f %f", &weight, &height) != EOF)
	{
		bmi = weight / (height * height / 10000);
		if (bmi < 18.5)
			printf("Underweight\n");
		else if (bmi >= 18.5 && bmi <= 23.9)
			printf("Normal\n");
		else if (bmi > 23.9 && bmi <= 27.9)
			printf("Overweight\n");
		else
			printf("Obese\n");
	}
	return 0;
}

//��Ŀ10
//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ�
//�����Ρ����������λ���ͨ�����Σ���
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		//������������������
		if (a + b>c && b + c>a && c + a>b)
		{
			if (a == b && b == c)
				printf("Equilateral triangle!\n");
			else if ((a == b &&a != c) || (a == c && a != b) || (b == c &&b != a))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}
	return 0;
}
*/
//Ϊɶ������ڴ�ռ�������
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("&d &d &d", &a, &b, &c) != EOF) //��Ϊ��������ʽ�����~ - ~!!!
	{
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c)
				printf("Equilateral triangle!\n");
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
		{
			printf("Not a triangle!\n");

		}
		
	}
	return 0;
}

/*
//��Ŀ9
//KiKi���ѧϰ���ź���ϵͳ�γ̣����ſ�����һ���ǳ���Ȥ�ĺ�����
//��λ��Ծ����������һ�ֶ��巽ʽΪ��
//��������λ�弤������ʱ��t�ϵ�ֵ��
int main()
{
	int t = 0;
	while (scanf("%d", &t) != EOF)
	{
		if (t > 0)
		{
			printf("1\n");
		}
		else if (t == 0)
		{
			printf("0.5\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
int main()
{
	int t = 0;
	while (scanf("%d", &t) != EOF)
	{
		if (t>0)
			printf("%d\n", 1);
		else if (t == 0)
			printf("%.1f\n", 0.5f);
		else
			printf("%d\n", 0);
	}
	return 0;
}

//��Ŀ8
//KiKi�������ĸ��Сдת������һ���ַ���
//�ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
int main()
{
	char num = 0;
	while (scanf(" %c", &num) != EOF)
	{
		if (num >= 'a'&&num <= 'z')
		{
			num = num - '\0' - 32;//'\0'==0,'0'==48,
			printf("%c\n", num);

		}
		else if (num >= 'A'&&num <= 'Z')
		{
			num = num - '\0' + 32;
			printf("%c\n", num);
		}
	}
	return 0;
}
int main()
{
	int ch = 0;
	//��������
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
		{
			printf("%c\n", toupper(ch));
		}
		else
		{
			printf("%c\n", tolower(ch));
		}
		//����'\n'
		getchar();
	}
	return 0;
}

//��Ŀ7
//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�
int main()
{
	char num = 0;
	while (scanf(" %c", &num) != EOF)//ch=getchar()) != EOF ��whileѭ��getchar();//ȥ��ÿ���ַ����\n
	{//scanf("%c\n")//��%c�ĺ�߷���һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
		//����Ϊ�´����¿հ��ַ�������
		if (('a' <= num&&num <= 'z') || ('A' <= num&&num <= 'Z'))//isalpha(ch)
		{
			printf("%c is an alphabet.\n", num);
		}
		else
			printf("%c is not an alphabet.\n", num);
	}
	return 0;
}

//��Ŀ6
//KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������ĸ��Ϊ������
//�������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
int main()
{
	char num[11] = "AaEeIiOoUu";
	int i = 0;
	char n = 0;
	while (scanf(" %c", &n) != EOF)////��%c��ǰ��дһ���ո��������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
	{
		for (i = 0; i<10; i++)
		{
			if (n == num[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
			printf("Consonant\n");
	}
	return 0;
}

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
*/
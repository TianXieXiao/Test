 #pragma warning(disable:4996)
#include <stdio.h>
/*
//题目13
//KiKi想获得某年某月有多少天，
//请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
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

//题目12
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not
//quadratic equation”，当a ≠ 0时，根据△ = b2 - 4ac的三种情况计算并输出方程的根。
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
					(-b) / (2 * a), sqrt(-state) / (2 * a)); //虚部的写法
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

//题目11
//在计算BMI（BodyMassIndex ，身体质量指数）的案例基础上，判断人体胖瘦程度。
//BMI中国标准如下表所示。
int main()
{
	float height = 0;//不能写成int 后面在进行(float)weight转换精度，会出现丢失
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

//题目10
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边
//三角形、等腰三角形或普通三角形）。
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		//满足条件就是三角形
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
//为啥会出现内存占用溢出？
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("&d &d &d", &a, &b, &c) != EOF) //因为你把输入格式打错了~ - ~!!!
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
//题目9
//KiKi最近学习了信号与系统课程，这门课里有一个非常有趣的函数，
//单位阶跃函数，其中一种定义方式为：
//现在试求单位冲激函数在时域t上的值。
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

//题目8
//KiKi想完成字母大小写转换，有一个字符，
//判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
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
	//多组输入
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
		//处理'\n'
		getchar();
	}
	return 0;
}

//题目7
//KiKi想判断输入的字符是不是字母，请帮他编程实现。
int main()
{
	char num = 0;
	while (scanf(" %c", &num) != EOF)//ch=getchar()) != EOF 出while循环getchar();//去除每个字符后的\n
	{//scanf("%c\n")//在%c的后边发给一个'\n'，其实在输入时候就会消化掉这个\n字符
		//不会为下次留下空白字符的隐患
		if (('a' <= num&&num <= 'z') || ('A' <= num&&num <= 'Z'))//isalpha(ch)
		{
			printf("%c is an alphabet.\n", num);
		}
		else
			printf("%c is not an alphabet.\n", num);
	}
	return 0;
}

//题目6
//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，
//请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
int main()
{
	char num[11] = "AaEeIiOoUu";
	int i = 0;
	char n = 0;
	while (scanf(" %c", &n) != EOF)////在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
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

//题目5
//KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。
//从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
//1. 多组输入
//2. 每组输入接受3个数字，求出最大值，因为成绩不能是负数，所以假设max期初是0.
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

//题目4
//KiKi想知道一个整数的奇偶性，请帮他判断。
//从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。
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

//题目3
//KiKi想知道他的考试分数是否通过，请帮他判断。从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格
//，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
int main()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		if (score >= 60)          //如果省略花括号，OJ将不能通过
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

//题目2
//KiKi想知道他的考试成绩是否完美，请帮他判断。
//从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，
//如果是则输出“Perfect”。

//1. 多组输入。
//2. 数学中的90<=score<=100 的写法，在C语言中直接写是有bug的。
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

//题目1
//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，
//如果大于等于140，则表明他是一个天才，输出“Genius”。

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)//这种写法是因为scanf读取失败返回EOF,EOF是-1，所以按位取反后的结果是0,0为假，可以让循环停止。
	{
		if (n >= 140)
			printf("Genius");
	}
	return 0;
}
*/
 #pragma warning(disable:4996) 
#include <stdio.h>
//猜凶手
//int main()
//{
//	char murder = 'A';
//	for (murder = 'A'; murder < 'D'; murder++)
//	{
//		if (((murder != 'A') + (murder == 'C') +
//			(murder == 'D') +
//			(murder != 'D')) == 1)
//		{
//			printf("凶手是%c\n", murder);
//			break;
//		}
//	}
//	return 0;
//}
//猜名次
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 0; A <= 5;A++)
	for (B = 0; B <= 5;B++)
	for (C = 0; C <= 5;C++)
	for (D = 0; D <= 5;D++)
	for (E = 0; E <= 5;E++)
	if (((B == 2) + (A == 3)==1) &&
		((B == 2) + (E == 4) == 1) &&
		((C == 1) + (D == 2) == 1) && 
		((C == 5) + (D == 3) == 1) &&
		((E == 4) + (A==1)==1)==1)
	if (120 == A * B * C * D * E )
	{
		printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
	}
	return 0;
}
 #pragma warning(disable:4996) 
#include <vld.h>
#include "Contact.h"
 
void Menu()
{
	printf("**************************\n");
	printf("*          ͨѶ¼        *\n");
	printf("**************************\n");
	printf("* [1] Add     [2] Delete *\n");
	printf("* [3] Find    [4] Modify *\n");
	printf("* [5] Show    [6] Clear  *\n");
	printf("* [7] Sort    [0] Exit   *\n");
	printf("**************************\n");
}
void main()
{
	Contact cont;
	int select = 1;
	Init(&cont);
	while (select)
	{
		Menu();
		printf("����������ѡ��:>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case ADD:
			Add(&cont);
			break;
		case DELETE:
			Delete(&cont);
			break;
		case FIND:
			Find(&cont);
			break;
		case MODIFY:
			Modify(&cont);
			break;
		case SHOW:
			Show(&cont);
			break;
		case CLEAR:
			Clear(&cont);
			break;
		case SORT:
			Sort(&cont);
			break;
		default:
			printf("ѡ������������ѡ��...\n");
			break;
		}
	}

	Save(&cont);
	Destory(&cont);

	printf("Good bye!!!\n");
}
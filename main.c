#include "contact.h"

static void Menu()
{
	printf("+----------------Menu---------------+\n");
	printf("|  1. Add     2. Delete   3. Search |\n");
	printf("|  4. Modify  5. Show     6. Clear  |\n");
	printf("|  7. Sort    0. Quit               |\n");
	printf("+-----------------------------------+\n");
	printf("Please Select# ");
}

int main()
{
	contact_t *ct = GetContact();

	int quit = 0;
	while (!quit)
	{
		int select = 0;
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			AddPerson(&ct);
			break;
		case 2:
			DelPerson(ct);
			break;
		case 3:
			SearchPerson(ct);
			break;
		case 4:
			//ModifyPerson();
			break;
		case 5:
			ShowContact(ct);
			break;
		case 6:
			ClearContact(ct);
			break;
		case 7:
			SortContact(ct); //qsort(); ÅÅÐò×Ö·û´®£¬ÐèÒª×¢Òâ£¡£¡
			break;
		case 0:
			quit = 1;
			SaveFile(ct);
			free(ct);
			break;
		default:
			printf("Enter Error, Try Again!\n");
			break;
		}
	}
	printf("ByeBye£¡\n");
	system("pause");
	return 0;
}
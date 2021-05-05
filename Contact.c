 #pragma warning(disable:4996) 
#include "Contact.h"
static void CheckCapacity(Contact *pct)
{
	if (pct->size >= pct->capacity)
	{
		//�ռ�����
		PersonInf *new_data = (PersonInf*)realloc(pct->data, sizeof(PersonInf)*pct->capacity);
		pct->capacity *= 2;
		pct->data = new_data;
		printf("���ݳɹ�...\n");
	}
}

static int FindByName(Contact *pct, char *name)
{
	for (size_t i = 0; i < pct->size; i++)
	{
		if (strcmp(pct->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

void Init(Contact *pct)
{
	assert(pct != NULL);
	pct->capacity = DEFAULT_CONTACT_SIZE;
	pct->data = (PersonInf*)malloc(sizeof(PersonInf)*pct->capacity);
	assert(pct->data != NULL);
	memset(pct->data, 0, sizeof(PersonInf)*pct->capacity);
	pct->size = 0;

	Load(pct);
}

void Add(Contact *pct)
{
	assert(pct != NULL);
	
	//�������
	CheckCapacity(pct);

	printf("����:>");
	scanf("%s", pct->data[pct->size].name);
	printf("�Ա�:>");
	scanf("%s", pct->data[pct->size].sex);
	printf("����:>");
	scanf("%d", &(pct->data[pct->size].age));
	printf("�绰:>");
	scanf("%s", pct->data[pct->size].tel);
	printf("סַ:>");
	scanf("%s", pct->data[pct->size].addr);
	pct->size++;
	printf("����ͨѶ¼��Ա��Ϣ�ɹ�....\n");
}

void Delete(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��...\n");
		return;
	}
	char name[MAX_NAME_SIZE];
	printf("������Ҫɾ��������:>");
	scanf("%s", name);
	int index = FindByName(pct, name);
	if (index == -1)
	{
		printf("Ҫɾ�������ֲ�����...\n");
		return;
	}
	for (size_t i = index; i<pct->size; i++)
		pct->data[i] = pct->data[i + 1];
	pct->size--;
	printf("ɾ���ɹ�...\n");
}

void Find(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ����ܲ�ѯ...\n");
		return;
	}
	char name[MAX_NAME_SIZE];
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);
	int index = FindByName(pct, name);
	if (index == -1)
	{
		printf("���޴���...\n");
		return;
	}
	printf("%-10s%-8s%-8s%-12s%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
	printf("%-10s%-8s%-8d%-12s%-30s\n", pct->data[index].name
		                   , pct->data[index].sex
		                   , pct->data[index].age
		                   , pct->data[index].tel
		                   , pct->data[index].addr);
}

void Modify(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ������޸�...\n");
		return;
	}
	char name[MAX_NAME_SIZE];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int index = FindByName(pct, name);
	if (index == -1)
	{
		printf("�޴��ˣ������޸�...\n");
		return;
	}
	int select = 1;
	while (select)
	{
		printf("�����޸�ʲô��Ϣ:1-���� 2-�Ա� 3-���� 4-�绰 5-��ַ\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("������Ҫ�޸ĵ�����:>");
			scanf("%s", pct->data[index].name);
			break;
		case 2:
			printf("������Ҫ�޸ĵ��Ա�:>");
			scanf("%s", pct->data[index].sex);
			break;
		case 3:
			printf("������Ҫ�޸ĵ�����:>");
			scanf("%d", &(pct->data[index].age));
			break;
		case 4:
			printf("������Ҫ�޸ĵĵ绰:>");
			scanf("%s", pct->data[index].tel);
			break;
		case 5:
			printf("������Ҫ�޸ĵĵ�ַ:>");
			scanf("%s", pct->data[index].addr);
			break;
		default:
			printf("ѡ�����������ѡ��...\n");
			continue;
		}
		break;
	}
	printf("�޸ĳɹ�...\n");
}

void Show(Contact *pct)
{
	assert(pct != NULL);
	printf("**********************************\n");
	printf("%-10s%-8s%-8s%-12s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (size_t i = 0; i < pct->size; i++)
	{
		printf("%-10s%-8s%-8d%-12s%-30s\n", pct->data[i].name
			, pct->data[i].sex
			, pct->data[i].age
			, pct->data[i].tel
			, pct->data[i].addr);
	}
	printf("**********************************\n");
}

void Clear(Contact *pct)
{
	printf("ȷ��Ҫ���ͨѶ¼��(Y/N):>\n");
	char ch;
	fflush(stdin);//��ջ��������\n
	scanf("%c", &ch);
	if (ch == 'N' || ch == 'n')
		return;
	pct->size = 0;
	memset(pct->data, 0, sizeof(pct->data));
}

void Sort(Contact *pct)
{
	assert(pct != NULL);
	for (size_t i = 0; i < pct->size-1; i++)
	{
		for (size_t j = 0; j < pct->size - i - 1; j++)
		{
			if (strcmp(pct->data[j].name, pct->data[j + 1].name)>0)
			{
				PersonInf tmp = pct->data[j];
				pct->data[j] = pct->data[j + 1];
				pct->data[j + 1] = tmp;
			}
		}
	}
	printf("����ɹ�...\n");
}

void Save(Contact *pct)
{
	FILE *fp = fopen("Contact.dat", "w");
	assert(fp != NULL);

	for (size_t i = 0; i < pct->size; i++)
	{
		fprintf(fp, "%-10s%-8s%-8s%-12s%-30s\n", pct->data[i].name
			, pct->data[i].sex
			, pct->data[i].age
			, pct->data[i].tel
			, pct->data[i].addr);
	}
	fclose(fp);
	printf("ͨѶ¼����ɹ�...\n");
}

void Load(Contact *pct)
{
	FILE *fp = fopen("Contact.dat", "r");
	assert(fp != NULL);

	while (!feof(fp))
	{
		CheckCapacity(pct);
		int res = fscanf(fp, "%s %s %d %s %s",pct->data[pct->size].name
			, pct->data[pct->size].sex
			, &(pct->data[pct->size].age)
			, pct->data[pct->size].tel
			, pct->data[pct->size].addr);
		if (res == EOF)    //�ﵽ���ļ�ĩβ
			break;
		pct->size++;
	}

	fclose(fp);
	printf("ͨѶ¼���سɹ�...\n");
}

void Destory(Contact *pct)
{
	free(pct->data);
	pct->data = NULL;
	pct->capacity = pct->size = 0;
	printf("��������ɹ�...\n");
}

#include "contact.h"

contact_t *GetContact(int _cap)
{
	contact_t *ct = NULL;
	FILE *fp = fopen(SAVE_FILE, "rb");
	if (NULL == fp){
		ct = malloc(sizeof(contact_t)+sizeof(person_t)*INIT);
		if (NULL == ct){
			perror("malloc");
			exit(1);
		}
		ct->cap = INIT;
		ct->num = 0;
		printf("Use Default Method!\n");
	}
	else{
		contact_t c;
		fread(&c, sizeof(contact_t), 1, fp);
		ct = malloc(sizeof(contact_t)+sizeof(person_t)*(c.cap));
		if (NULL == ct){
			perror("malloc");
			exit(2);
		}
		//memmove(ct, &c, sizeof(contact_t));
		ct->cap = c.cap;
		ct->num = c.num;
		person_t *p = ct->persons;
		fread(p, sizeof(person_t), ct->num, fp);
		fclose(fp);
		printf("Use File Method!\n");
	}
	return ct;
}

static int Inc(contact_t **ctp)
{
	//bug!
	printf("contact full, inc auto!\n");
	contact_t *c = realloc(*ctp, sizeof(contact_t)+sizeof(person_t)*((*ctp)->cap + INC));
	if (c == NULL){
		perror("realloc");
		return 0;
	}

	*ctp = c;
	(*ctp)->cap += INC;
	return 1;
}
//yes 1, no 0
static int IsFull(contact_t *ct)
{
	return ct->num >= ct->cap;
}
static int IsExist(contact_t *ct, const char *name)
{
	assert(ct);
	assert(name);

	int i = 0;
	for (; i < ct->num; i++){
		if (strcmp(ct->persons[i].name, name) == 0){
			return i;
		}
	}

	return -1;
}
void AddPerson(contact_t **ctp) //contact_t *ct
{
	assert(*ctp);
	if (!IsFull(*ctp) || Inc(ctp)){
		//1. 没有满的时候
		//2. 满了，但是扩容成功了！
		contact_t *ct = *ctp;
		person_t *p = ct->persons + ct->num;
		printf("Please Enter Name# ");
		scanf("%s", p->name); //IsExist(ct, name), return
		printf("Please Enter Sex# ");
		scanf("%s", p->sex);
		printf("Please Enter age# ");
		scanf("%d", &(p->age));
		printf("Please Enter telphone# ");
		scanf("%s", p->telphone);
		printf("Please Enter address# ");
		scanf("%s", p->address);
		ct->num++;
	}
	else{
		//Do Nothing
		//1. 满了，但是扩容失败了！
		printf("Inc Error!\n");
	}
}

void DelPerson(contact_t *ct)
{
	assert(ct);

	char name[SIZE * 2];
	printf("Please Enter Name For Delete# ");
	scanf("%s", name);
	int pos = IsExist(ct, name);
	if (pos >= 0){
		ct->persons[pos] = ct->persons[ct->num - 1];
		ct->num--;
	}
}

void SearchPerson(contact_t *ct)
{
	assert(ct);

	char name[SIZE * 2];
	printf("Please Enter Name For Search# ");
	scanf("%s", name);

	int pos = IsExist(ct, name);
	if (pos >= 0){
		printf("| %8s | %4s | %16s |\n", \
			ct->persons[pos].name, \
			ct->persons[pos].sex, \
			ct->persons[pos].address);
	}
	else{
		printf("[%s] Not Found!\n", name);
	}
}

void ClearContact(contact_t *ct)
{
	assert(ct);
	ct->num = 0;
}

static int compar_name(const void *x, const void *y)
{
	assert(x);
	assert(y);
	person_t *x_p = (person_t*)x;
	person_t *y_p = (person_t*)y;

	return strcmp(x_p->name, y_p->name);
}

void SortContact(contact_t *ct)
{
	assert(ct);
	person_t *p = ct->persons;
	qsort(p, ct->num, sizeof(person_t), compar_name);
}


void ShowContact(contact_t *ct)
{
	assert(ct);

	int i = 0;
	printf("+------------------------------------+\n");
	for (; i < ct->num; i++){
		printf("| %8s | %4s | %16s |\n", \
			ct->persons[i].name, ct->persons[i].sex, ct->persons[i].address);
		printf("+------------------------------------+\n");
	}
	printf("total: %d/%d [num/cap]\n", ct->num, ct->cap);
}

void SaveFile(contact_t *ct)
{
	assert(ct);
	FILE *fp = fopen(SAVE_FILE, "wb");
	if (NULL == fp){
		perror("fopen");
		return;
	}
	fwrite(ct, sizeof(contact_t), 1, fp);
	person_t *p = ct->persons;
	fwrite(p, sizeof(person_t), ct->num, fp);

	fclose(fp);

	printf("save done ...\n");
}
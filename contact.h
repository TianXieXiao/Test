#ifndef __CONTACT_H__
#define __CONTACT_H__

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

#define SIZE 16
#define INIT 10
#define INC  5

#define SAVE_FILE "save.bin"

typedef struct person{
	char name[SIZE*2];
	char sex[SIZE/2];
	int age;
	char telphone[SIZE*2];
	char address[SIZE * 4];
}person_t;

typedef struct contact{
	int cap; //总容量是多少
	int num; //目前有多少人
	person_t persons[0]; //柔性数组
}contact_t;

contact_t *GetContact();
void AddPerson(contact_t **ctp);
void DelPerson(contact_t *ct);
void SearchPerson(contact_t *ct);
//ModifyPerson();
void ShowContact(contact_t *ct);
void ClearContact(contact_t *ct);
void SortContact(contact_t *ct);
void SaveFile(contact_t *ct);


#endif
#ifndef _CONTACT_H_
#define _CONTACT_H_
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//定义操作选项
typedef enum OP_STATE
{
	EXIT,
	ADD,
	DELETE,
	FIND,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
}OP_STATE;

//#define MAX_CONTACT_SIZE 1000
#define DEFAULT_CONTACT_SIZE 2
#define MAX_NAME_SIZE 20
#define MAX_ADDR_SIZE 256

//定义人员信息结构
typedef struct PersonInf
{
	char name[MAX_NAME_SIZE];
	char sex[3];
	char tel[12];
	char addr[MAX_ADDR_SIZE];
	short age;
}PersonInf;

//定义通讯录结构
typedef struct Contact
{
	//PersonInf data[MAX_CONTACT_SIZE];
	PersonInf *data;
	size_t size;
	size_t capacity;
}Contact;

////////////////////////////////////////
//函数声明
void Init(Contact *pct);
void Add(Contact *pct);
void Delete(Contact *pct);
void Find(Contact *pct);
void Modify(Contact *pct);
void Show(Contact *pct);
void Clear(Contact *pct);
void Sort(Contact *pct);

void Destory(Contact *pct);
void Save(Contact *pct);
void Load(Contact *pct);
#endif
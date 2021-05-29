 #pragma warning(disable:4996) 
#include <stdio.h>
#define SWAP(num) ((((num)&0x55555555)<<1)|(((num)&0xaaaaaaaa)>>1))
#define OFFSETOF(id ,element)  (unsigned long)(&(((struct id*)0)->element))
void main()
{
	struct Person
	{
		char sex ;
		int n;
	};
	int num = 0;
	scanf("%d", &num);
	printf("ÄæÐòÎª£º%d", SWAP(num));
	/*OFFSETOF(Person, sex);
	printf("%d\n",OFFSETOF(Person,n));*/
}
	
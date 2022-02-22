#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ba[5];
void changevalue(int ba[5])//能引用的为ba[0]-ba[4]
{
	ba[3] = 27;
	ba[4] = 45;
	return;
}
	
int main()
{
	int a[5];
	a[0] = 97;
	a[1] = 89;
	a[2] = 99;
	a[3] = 88;
	a[4] = 79;
	changevalue(a);
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	printf("happy ending");
}
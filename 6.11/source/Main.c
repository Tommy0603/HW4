#include <stdio.h>
#include <stdlib.h>
#define size 8
int main(void)
{
	int i,j,tmp,counter = 1;
	int flag_loop = 0;
	int a[size] = {26,5,81,7,63,24,36,8};
	for (i = 0; i < size - 1; i++)
	{
		flag_loop = 0;
		for (j = 0; j < size - counter; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				flag_loop = 1;
			}
		}
		if (flag_loop != 1)
		{
			break;
		}
		else
		{ 
			printf("Loop %d¡G",i);
			for (j = 0; j < size; j++)
				printf("%4d",a[j]);
			printf("\n");
		}
		counter++;
	}
	system("pause");
}
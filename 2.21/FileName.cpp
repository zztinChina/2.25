#include<stdio.h>
int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,222,34,32,12,34,1,2,33,44 };
	int i = 0;
	int  count = 0;
	for (i = 0; i < 20; i++)
	{
		if (arr[i] % 2 == 0)
		{
			int h = 0;
			for (h = i + 1; h < 20; h++)
			{
				count++;
				if (arr[h] % 2 != 0)
				{
					int tem = 0;
					tem = arr[i];
					arr[i] = arr[h];
					arr[h] = tem;
					break;
				}
			}
		}

	}
	for (i = 0; i < 20; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	printf("%d", count);
	return 0;
}
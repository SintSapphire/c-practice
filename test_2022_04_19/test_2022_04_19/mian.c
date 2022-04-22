#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int judge(int n)
//{
//	int i = 2;
//	int flag = 1;
//
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int x = 1;
//	for (x = 101; x <= 200; x++)
//	{
//		if (judge(x))
//		{
//			printf("%d ", x);
//		}
//	}
//	return 0;
//}


int judge(int x)
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (judge(n))
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}

	return 0;
}
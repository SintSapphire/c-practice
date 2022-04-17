#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//int main()
//{
//	int n = 1;
//	int i = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n / 10 == 9 )
//		{
//			i++;
//		}
//		if (n % 10 == 9)
//		{
//			i++;
//		}
//	}
//	printf("%d", i);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += (double)(1.0 / i);
//		}
//		if (i % 2 == 0)
//		{
//			sum -= (double)(1.0 / i);
//		}
//	}
//	printf("%lf", sum);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0;i <= 9;i++)
//	{
//		scanf_s("%d", &arr[i]);
//		
//	}
//	i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			int m = i * n;
//			printf("%d*%d=%d\t", n, i, m);
//			if (i == n)
//			{
//				printf("\n");
//			}
//
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sum - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}

#include<stdlib.h>
#include <time.h>

void menu()
{
	printf("*********************************\n");
	printf("********   1. 开始游戏   ********\n");
	printf("********   0. 退出游戏   ********\n");
	printf("*********************************\n");
}

//0~RAND_MAX(32767)
void game()
{
	int guess = 0;
	//1. 生成随机数
	//0~99 --> 1~100
	int ret = rand()%100+1;//生成随机数的函数
	//printf("%d\n", ret);
	//2. 猜数字

	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

//指针
int *p = NULL;
int a = 0;

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字的整个逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}
	} while (input);

	return 0;
}
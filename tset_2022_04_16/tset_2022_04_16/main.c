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
//			printf("�±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;
//}

#include<stdlib.h>
#include <time.h>

void menu()
{
	printf("*********************************\n");
	printf("********   1. ��ʼ��Ϸ   ********\n");
	printf("********   0. �˳���Ϸ   ********\n");
	printf("*********************************\n");
}

//0~RAND_MAX(32767)
void game()
{
	int guess = 0;
	//1. ���������
	//0~99 --> 1~100
	int ret = rand()%100+1;//����������ĺ���
	//printf("%d\n", ret);
	//2. ������

	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

//ָ��
int *p = NULL;
int a = 0;

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//�����ֵ������߼�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}
	} while (input);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}

//void swap(int* arr1[], int* arr2[],int x)
//{
//	int n = 0;
//	while (n >= 0&&n <= x)
//	{
//		int temp = 0;
//		temp = arr1[n];
//		arr1[n] = arr2[n];
//		arr2[n] = temp;
//		n++;
//	}
//}
//
//int main()
//{
//	int m = 2;
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	swap(arr1, arr2, m);
//	int a = 0;
//	printf("arr1:     arr2:\n");
//	while (a >= 0 && a <= m)
//	{
//		printf(" %d        %d  \n", arr1[a], arr2[a]);
//		a++;
//	}
//	return 0;
//	
//}


//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

void init(int arr[],int x)
{
	int i = 0;
	while (i >= 0 && i < x)
	{
		arr[i] = 0;
		i++;
	}
}

void print(int arr[], int x)
{
	int i = 0;
	while (i >= 0 && i < x)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
}

void reverse(int arr[], int x)
{
	int left = 0;
	int right = x - 1;
	while (left < right)
	{
		int n;
		n = arr[left];
		arr[left] = arr[right];
		arr[right] = n;
		left++;
		right--;
	}
}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int m = 5;
	//init(arr1, m);
	//print(arr1, m);
	reverse(arr1, m);
	int i = 0;
	printf("arr1:");
	while (i >= 0 && i < m)
	{
		printf("%d", arr1[i]);
		i++;
	}
	printf("\n");

	return 0;
}
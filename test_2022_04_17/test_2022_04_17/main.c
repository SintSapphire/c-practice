#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Swap(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
////
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
////
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//����
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	//Swap(a, b);
//	Swap(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}

void p(int x) {
	for (int i = 1; i <= x; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", j, i, i * j);
			if (j == i)
			{
				printf("\n");
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	p(n);
	return 0;
}
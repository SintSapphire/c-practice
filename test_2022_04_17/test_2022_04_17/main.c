#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Swap(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
////
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
////
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前:a=%d b=%d\n", a, b);
//	//a和b叫实参
//	//Swap(a, b);
//	Swap(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
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
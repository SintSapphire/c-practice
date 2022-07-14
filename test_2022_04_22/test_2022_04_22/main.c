#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void print(int x)
//{
//	
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//
//	return 0;
//}

//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n* fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int m = fac(a);
//	printf("%d", m);
//
//	return 0;
//}

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int my_strlen(char* str)//参数部分写出指针的形式
//{
//	int count = 0;//计数，临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
//
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//	//char* 
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

//int strlen(char* arr)
//{
//	int n = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		n++;
//	}
//	return n;
//}
//
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//
//    for (left = 0; left <right; left++)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int DigitSum(int n)
//{
//	int i = 0;
//	int sum = 0;
//	while (n > 0)
//	{
//		i = n % 10;
//		sum = sum + i;
//		n = n / 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	printf("输入：");
//	scanf("%d", &n);
//	int m = DigitSum(n);
//	printf("输出：%d", m);
//	return 0;
//
//}

//int fun(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if(k == 1)
//		return n;
//	else
//	{
//		return n * fun(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d", fun(n, k));
//}


//int fib(int n)
//{
//	if (n == 1 || n == 2) 
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	int n = 0;
//	printf("请输入需要第几位斐波那契数 ： ");
//	scanf("%d", &n);
//	int f = fib(n);
//	printf("第%d位斐波那契数是%d\n", n, f);
//}



//int fib(int n)
//{
//	int fib1 = 1;
//	int fib2 = 1;
//	int fibn = 0;
//	if (n == 1 || n == 2) {
//		printf("第%d位斐波那契数是1！\n", n);
//	}
//	else {
//		printf("第%d位斐波那契数是", n);
//		while (n > 2) {
//			fibn = fib1 + fib2;
//			fib2 = fib1;
//			fib1 = fibn;
//			n--;
//		}
//		printf("%d！\n", fibn);
//	}
//}
//void main()
//{
//	int n = 0;
//	printf("请输入需要第几位斐波那契数 ： ");
//	scanf_s("%d", &n);
//	fib(n);
//}
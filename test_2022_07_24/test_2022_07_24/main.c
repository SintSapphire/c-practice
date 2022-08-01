#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void rotate(int* nums, int numsSize, int k) 
//{
//	if (numsSize == k || k == 0)
//		return;
//	for (int i = 0; i < k; i++)
//	{
//		int previous = nums[numsSize - 1];
//		for (int j = 0; j < numsSize; j++)
//		{
//			int temp = nums[j];
//			nums[j] = previous;
//			previous = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int numsSize = 9;
//	int k = 3;
//	rotate(&arr, numsSize, k);
//	printf("arr:");
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int missingNumber(int* nums, int numsSize)
{
    int ret1 = 0;
    int ret2 = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ret1 += nums[i];
    }
    for (int k = 0; k < numsSize + 1; k++)
    {
        ret2 += k;
    }
    return ret2 - ret1;
}


int main()
{
    int arr[3] = { 3,0,1 };
    int n = 3;
    int i = missingNumber(&arr, n);
    printf("%d",i);
    return 0;
}

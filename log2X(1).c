#include <stdio.h>

int main()
{
	int x;
	int ret = -1;
	
	scanf("%d", &x);
	int t = x;
	while ( x>0 ) {
		x /= 2;
		ret++;
	}
	printf("log2 of %d is %d.", t, ret);
	
	return 0;
}

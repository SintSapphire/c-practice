#include <stdio.h>

int main()

{
	int i;
	float a =2.0, b = 1.0, h = 0;
	for ( i=1; i < 20; i++ )
	{
		h = h + (a/b);
		b = a;
		a = a+b;
	}
	printf("ǰ20��ĺ�Ϊ%2f\n",h);
	
	return 0;
}

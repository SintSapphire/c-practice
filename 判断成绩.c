#include <stdio.h>

int main()
{
	const int PASS=60;
	int score; 
	
	printf("������ɼ�: ");
	scanf("%d", &score);
	
	printf("������ĳɼ���%d.\n", score);
	
	if ( score < PASS )
	    printf("���ź�������ɼ�������");
	else
	    printf("ף���㣬����ɼ������ˡ�");
	printf("�ټ�\n") ;
}

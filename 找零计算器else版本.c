#include <stdio.h>

int main()
{
	//  ��ʼ��
	int price = 0;
	int bill = 0;
	//  �������Ʊ��
	printf("��������: ");
	scanf("%d", &price);
	printf("������Ʊ��: ");
	scanf("%d", &bill);
	//  ��������
	if ( bill >= price ) {
		printf("Ӧ������: %d\n", bill - price);
	} else {
		printf("ûǮ����\n");
	}
	
	return 0;
 } 
 


#include <stdio.h>

int main()
{
	int type;
	
	scanf("%d", &type);
	
	switch ( type ) {
	case 1:
		printf("��á�");
		break;
	case 2:
		printf("���Ϻá�");
		break;
	case 3:
		printf("���Ϻá�");
		break;
	case 4:
		printf("�ټ���");
		break;
	default:
		printf("������������ʺ��");
		break; 
	}
	
	return 0;
}

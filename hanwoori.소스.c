#include<stdio.h>
int main()
{
	int jumsu;
	puts("������ �Է��ϼ��� ! (0 ~ 100)");
	scanf_s("%d", &jumsu);
	switch (jumsu / 10)//
	{
	case 10:
	case 9://90~99/10-->9
		puts("A����");
		break;//�� �̻� �Ѿ�� �ʰ�
	case 8://80~89/10-->8
		puts("B����");
		break;// {}�������� �̵�
	case 7://70~79 /10-->7
		puts("C����");
		break;
	case 6://60~69/10-->6
		puts("D����");
		break;
	default://case�̿� ������
		puts("F����");
	}//Ż����ġ
	return 0;
}
#include<stdio.h>
int main()
{
	int n;
	puts("점수를 입력하세요 ! (0 ~ 100)");
	scanf_s("%d", &n);
	switch (n / 10)//10점대로 판단하기위해 10으로 나눈다.
	{
	case 10://100
	case 9://90~99
		puts("A학점");
		break;
	case 8://80~99
		puts("B학점");
		break;
	case 7://70~79
		puts("C학점");
		break;
	case 6://60~69
		puts("D학점");
		break;
	default://case이외 나머지
		puts("F학점");
	}
	return 0;
}
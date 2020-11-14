#include<stdio.h>
int main()
{
	int jumsu;
	puts("점수를 입력하세요 ! (0 ~ 100)");
	scanf_s("%d", &jumsu);
	switch (jumsu / 10)//
	{
	case 10:
	case 9://90~99/10-->9
		puts("A학점");
		break;//그 이상 넘어가지 않게
	case 8://80~89/10-->8
		puts("B학점");
		break;// {}다음으로 이동
	case 7://70~79 /10-->7
		puts("C학점");
		break;
	case 6://60~69/10-->6
		puts("D학점");
		break;
	default://case이외 나머지
		puts("F학점");
	}//탈출위치
	return 0;
}
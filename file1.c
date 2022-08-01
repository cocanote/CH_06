//file1.c
#include "file.h" //사용자정의 헤더파일 ""   절대경로로 쓸 경우 <>로 사용가능

int salary = 3500000; 
int main()
{
	myName();
	myAge();
	mySal();

	printf("실수령액 : %d \n", salary);
	return 0;
}

void myName()
{
	printf("성명 : 홍길동 \n");
}
void myAge()
{
	printf("나이 : %d \n", AGE);
}
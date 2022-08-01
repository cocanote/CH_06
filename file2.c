//file2.c
#include "file.h"

extern int salary; // extern !! 메모리를 할당받지 않고 컴파일러에게 자료형을 알린다.
					// 즉 다른파일의 전역변수를 사용할 때 컴파일 오류가 발생하지 않게한다.
void mySal()
{
	//printf("수당: %d \n", SUDANG);
	salary += SUDANG;
}
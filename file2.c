//file2.c
#include "file.h"

extern int salary; // extern !! �޸𸮸� �Ҵ���� �ʰ� �����Ϸ����� �ڷ����� �˸���.
					// �� �ٸ������� ���������� ����� �� ������ ������ �߻����� �ʰ��Ѵ�.
void mySal()
{
	//printf("����: %d \n", SUDANG);
	salary += SUDANG;
}
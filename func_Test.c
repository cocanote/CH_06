#include <stdio.h>
#include <math.h>
//�Լ� : ����� ó���ϴ� ������ �ڵ���� ����
//�Լ���� : 1.�Լ�����, 2.�Լ�ȣ��, 3.�Լ�����(�ɼ�)

void funcA();
void funcB(int salary);
int funcD();
//float funcE(int salTot, float rate);
//�Լ� ������ �����Ϸ����� �Լ��� ����(����)�� �˸���.
//�̸� �����ϸ� �����Ϸ��� ��� ���ڸ� int�� �����Ѵ�.

float funcE(int salTot, float rate)
{
	//printf("funcE(): ���� : %f \n", salTot * rate);
	return salTot * rate;
}

int main()
{
	int salary = 3500000; //��������(�ڽ��� ����� �Լ������� ���)
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA(); //2:�Լ� ȣ���(���μ�)
	funcB(salary); //���μ�

	sudang = funcD();
	printf("main() ����: %d \n", sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("tax : %f \n", tax);
	printf("main() end. \n");

	printf("10�� ������: %lf \n", sqrt(10.0));

	return 0;
}

//1:�Լ����Ǻ�
void funcA() //�Լ����
{		//�Լ��ٵ�
	printf("funcA() start. \n");
	printf("funcA() end. \n");
}

//���μ��� ���μ��� ������ �ڷ����� ���ƾ� �Ѵ�
void funcB(int salary)	//���μ�
{
	printf("funcB() salary %d. \n",salary);
}

int funcD()
{
	int over_time = 15;

	//printf("funcD() ���� : %d \n", over_time * 37000);
	return over_time * 37000;
}


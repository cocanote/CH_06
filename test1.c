#include <stdio.h>
#include <math.h>
//Ű����� ���� �������� �Է¹޾�, main()
//���� ����(area()) ���� �ѷ�(cir())�� ���Ͽ� 
//����Ͻÿ�.

//������
/*
������ ? 7
���ǳ��� : ???
���ǵѷ� : ???
*/

double Area(int r);
double Cir(int r);

#define PI 3.141592
int main()
{
	//1.�޸� �Ҵ�(��������)
	int radius;
	//double area, circle;

	//2.������ �Է�
	printf("������ ? ");
	scanf("%d", &radius);

	//3.ó�� ���

	//4. ���
	printf("���� ���� : %lf \n", Area(radius));
	printf("���� �ѷ� : %lf \n", Cir(radius));

	return 0;
}

double Area(int r)
{
	return PI * pow(r, 2);
}

double Cir(int r)
{
	return r * 2 * PI;
}
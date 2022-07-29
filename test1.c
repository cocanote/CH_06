#include <stdio.h>
#include <math.h>
//키보드로 부터 반지름을 입력받아, main()
//원의 넓이(area()) 원의 둘레(cir())를 구하여 
//출력하시오.

//실행결과
/*
반지름 ? 7
원의넓이 : ???
원의둘레 : ???
*/

double Area(int r);
double Cir(int r);

#define PI 3.141592
int main()
{
	//1.메모리 할당(변수선언)
	int radius;
	//double area, circle;

	//2.데이터 입력
	printf("반지름 ? ");
	scanf("%d", &radius);

	//3.처리 계산

	//4. 출력
	printf("원의 넓이 : %lf \n", Area(radius));
	printf("원의 둘레 : %lf \n", Cir(radius));

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
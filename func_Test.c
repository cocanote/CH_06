#include <stdio.h>
#include <math.h>
//함수 : 어떤일을 처리하는 논리적인 코드들의 집합
//함수사용 : 1.함수정의, 2.함수호출, 3.함수선언(옵션)

void funcA();
void funcB(int salary);
int funcD();
//float funcE(int salTot, float rate);
//함수 선언은 컴파일러에게 함수의 원형(형식)을 알린다.
//이를 생략하면 컴파일러는 모든 인자를 int로 간주한다.

float funcE(int salTot, float rate)
{
	//printf("funcE(): 세금 : %f \n", salTot * rate);
	return salTot * rate;
}

int main()
{
	int salary = 3500000; //지역변수(자신이 선언된 함수에서만 사용)
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA(); //2:함수 호출부(무인수)
	funcB(salary); //실인수

	sudang = funcD();
	printf("main() 수당: %d \n", sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("tax : %f \n", tax);
	printf("main() end. \n");

	printf("10의 제곱근: %lf \n", sqrt(10.0));

	return 0;
}

//1:함수정의부
void funcA() //함수헤더
{		//함수바디
	printf("funcA() start. \n");
	printf("funcA() end. \n");
}

//실인수와 가인수는 개수와 자료형이 같아야 한다
void funcB(int salary)	//가인수
{
	printf("funcB() salary %d. \n",salary);
}

int funcD()
{
	int over_time = 15;

	//printf("funcD() 수당 : %d \n", over_time * 37000);
	return over_time * 37000;
}


#include <stdio.h>


int salary = 3500000; //전역변수
void func_A(int age);
void func_B(int salaray);
void main()
{
	int age = 23;

	printf("main() age:%d,%p / salary : %d,%p \n", age, &age, salary, &salary);
	func_A(age);
	printf("main() age:%d,%p / salary : %d,%p \n", age, &age, salary, &salary);
	func_B(salary);
	printf("main() age:%d,%p / salary : %d,%p \n", age, &age, salary, &salary);
		return 0;
}

void func_A(int age)
{
	printf("funcA() age:%d,%p / salary : %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 200000;
}

void func_B(int salaray)
{
	int age = 23;
	int salary = 1000;


	printf("funcB() age:%d,%p / salary : %d,%p \n", age, &age, salary, &salary);
	age = 40;
	salary += 2000;
}
int  FuncD()
{
	int sum1 = 0;
		static int sum2 = 0;
		printf("sum1 : %d, sum2: %d", sum1++, sum2++);

}
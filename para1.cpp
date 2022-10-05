#include <iostream>
#include <stdint.h>


int main()
{
	//переменным лучше присваивать знач
	int varable_name = -1;
	
	//нельзя изменить
	const int const_variable = -2;


	float float_num = 0.f;
	double double_num = 0.;
	//long double long_double = 0.l;

	int a = 1;

	float b = 1.2;
	//плохая сумма (а неявно прриводиться к типу float)
	float sum_a_b = a + b;

	//лучшесамостоятельно привести к типу
	float floating_a = (float)a; //Cstyle
	float static_floating_a = static_cast<float>a; //C++style
	float good_sum_a_b = static_floating_a + b;


	std::cout << a / 2 << std::endl;
	return 0;
}
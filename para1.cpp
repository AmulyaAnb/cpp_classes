#include <iostream>
#include <stdint.h>


int main()
{
	//���������� ����� ����������� ����
	int varable_name = -1;
	
	//������ ��������
	const int const_variable = -2;


	float float_num = 0.f;
	double double_num = 0.;
	//long double long_double = 0.l;

	int a = 1;

	float b = 1.2;
	//������ ����� (� ������ ������������ � ���� float)
	float sum_a_b = a + b;

	//������������������� �������� � ����
	float floating_a = (float)a; //Cstyle
	float static_floating_a = static_cast<float>a; //C++style
	float good_sum_a_b = static_floating_a + b;


	std::cout << a / 2 << std::endl;
	return 0;
}
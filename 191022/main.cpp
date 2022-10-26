#include <iostream>

int division(float a, float b, float* c_ptr)
{
	if (b == 0.f)
	{
		return -1;
	}
	
	*c_ptr = a / b;
	
	return 0;
}

struct MyStruct
{
	float a;
	float b;
	float c;
	int ret;
	int arr[10];
};

MyStruct my_division(const MyStruct* my_struct)
{
	std::cout << my_struct << std::endl;
	MyStruct ret = {
		my_struct->a, //a
		my_struct->b, //b
		my_struct->a/my_struct->b, //c
		0, //ret Success
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	};
	return ret;
}

int main()
{
	
	const int b = 1000;
	const int* ptr_to_b = &b;
	int arr[] = {2, 3, 5};
	
	std::cout << ptr_to_b << std::endl;
	// massive
	std::cout << arr << std::endl;
	std::cout << *arr << std::endl;
	std::cout << arr[0] << std::endl;
	//pointer
	std::cout << *ptr_to_b << std::endl;
	std::cout << ptr_to_b[0] << std::endl;
	
	float c = 0;
	
	if (division(3, 2, &c))
	{
		std::cout << "ERROR" << std::endl;
	}
	else
	{
	std::cout << c << std::endl;	
	}
	//Пример со структурой
	MyStruct input_struct = {
		3, //a
		2, //b
		0, //c
		0, //ret Success
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	
	std::cout <<"Address input_struct: " << &input_struct << std::endl;
	std::cout << "Size of input_struct: " << sizeof(input_struct) << " " <<  "Size of &input_struct: " << sizeof(&input_struct)<< std::endl;
	MyStruct ret = my_division(&input_struct);
	
	std::cout <<"Mystruct c: " << ret.c << std::endl;

	
	int a;
	std::cin >>a;
	
	return 0;
}
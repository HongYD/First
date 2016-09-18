#include<stdio.h>
#include<iostream>
#include<fstream>
int a;
int b;
struct Vector2D
{
	int a;
	int b;

	void print()
	{
		printf("%d %d\n", a, b);
	}
};

std::ostream &operator<<(std::ostream &stream, Vector2D obj)
{
	stream << obj.a << " " << obj.b << std::endl;//在ostream新定义一种输出运算，即在接受到Vector2D的时候的输出方式，这里定义了在接受到Vector2D类型的变量之后，将其中的变量输出打印。
	return stream;
}
void main()
{
	Vector2D my_vector;
	my_vector.a = 1;
	my_vector.b = 2;
	FILE *of = fopen("cstyle.text", "w");
	fprintf(of, "%d %d", my_vector.a, my_vector.b);
	fclose(of);
	my_vector.print();
	printf("This is C Style\n");
	std::cout << "This is C++ Style" << std::endl;
	std::cout << my_vector << std::endl;

	std::ofstream ofile("cppstyle.txt");
	ofile << my_vector << std::endl;
	  
}